


# The note will be comment the code at below one line
# Example:
# # SOME note
# The code that note are saying



from pymongo import mongo_client
from api_commit_get import *

import requests

import time
import queue
import os
import re
import traceback as tb

import queue
import json
from fake_useragent import UserAgent
ua = UserAgent()
# Time step file is waiting for develoap done.
timestep_file = False
# This options will let program use a pointer to deal with same data in pervious timestep
timestep_add_mode = False
# This option will let all timestep data write into a singal dictionary file
timestep_key_dire = True
page_countine_mode = True
# floder you want to stroge data
root_dir = ""
# bvid_list = ['BV1kq4y1p7ed', 'BV12h411z7nU','BV1wL411n7C2','BV1Z44y127MR']
bvid_list = []
#bvid_list = ['BV1UC4y1b7eG', 'BV1DC4y1b7UA']
sleep_seconds = 40

if bvid_list == None:
    bvid_list.append(input("输入需要获取评论的BV号： "))

# All in one processs, default to set enable(unless you want to use in module way)
# Module way will be avabile in future
all_in_one = True
# Write each page's raw json data to file
write_copy = False
# Write dictionary result data to file
write_copy_dict = False
# recover from last position
continue_mode_enable = True

not_found_exit= False
not_found_exit_passed= False
# xpath to get the data
max_page_xpath = '//*[@id="comment"]/div[@class="common"]/div[@class="comment"]/div[@class="bb-comment "]/div[@class="bottom-page paging-box-big"]/div[@class="page-jump"]/span'
page_input = '//*[@id="comment"]/div[@class="common"]/div[@class="comment"]/div[@class="bb-comment "]/div[@class="bottom-page paging-box-big"]/div[@class="page-jump"]/input'
# JS to scroll to bottom
js = "window.scrollTo(0, document.body.scrollHeight)"
# This flag is use to automatically sure thr page is done, still testing
flag_upper_done_element = '/html/body/div[3]/div/div[1]/div[3]/div[1]/span[4]/i'
flag_upper_not_done_str = '--'
# This profile can make sure every selenium browser has same configuration
broswer_profile = ""
cookie_dict = {''}
# Switch for MongoDB 
mongodb_switch = True
mongodb_url = ''
mongodb_db_name = ''
user_table_name = ''
comments_table_name = ''
video_info_table_name = ''
# Proxy settings to avoid ip control
proxy_enable = True
requests = requests.session()
if proxy_enable:
    requests.verify = True
    proxies = {'http': 'socks5://127.0.0.1:9150',
               'https': 'socks5://127.0.0.1:9150'}

bvid_process_queue = queue.Queue(maxsize=0)

def mongodb_connection(db_url):
    from pymongo import MongoClient
    return MongoClient(db_url)

def mongodb_insert(db_client, table_name, db_name, insert_dict, mul,reply):
    run_db = db_client[db_name]
    run_table = run_db[table_name]
    # Convert to list
    if mul:
        insert_track = []
        for key in insert_dict.keys():
            process_appendemnt = insert_dict[key]
            if reply:
                process_appendemnt['reply_id'] = key
            else:
                process_appendemnt['member_id'] = key
            status = None
            status = run_table.insert_one(process_appendemnt)
            

    else:
        status = run_table.insert_one(insert_dict)
    if status is None:
        raise RuntimeError('Could not insert data in {} at {}'.format(table_name, db_name))

#BUG： Change store to a format that supports to hold up to over 100 MB 
#FIXME: Add support for mongodb
# JSON mode limitation for size: About 20 pages.
if mongodb_switch:
    db_client = mongodb_connection(mongodb_url)
    if mongodb_db_name == '' or video_info_table_name == '' or user_table_name == '' or comments_table_name == '':
        print("Please fill in your mongodb database name and colium name")
def main(timestep_file, timestep_add_mode, timestep_key_dire, page_countine_mode, root_dir, bvid_list, all_in_one, write_copy, write_copy_dict, continue_mode_enable, cookie_dict):
    for video_id in bvid_list:
        print('Now we are collecting information from '+video_id)

        # Smart create a new floder to contain data if the floder is not exits
        try:
            print("Found exit floder")
            os.chdir(os.path.join(root_dir,video_id))
            running_dir = os.path.join(root_dir,video_id)
        except:
            print("Createing floder")
            os.mkdir(os.path.join(root_dir,video_id))
            os.chdir(os.path.join(root_dir,video_id))

        # Load files that is nedded for timestep kind mode
        if timestep_key_dire or timestep_add_mode or page_countine_mode:
            try:
                all_user_full_timestep_dict_file = open(
                    os.path.join(running_dir,'user_dict_all_timestep .json'), 'r',encoding='utf8')
                all_commit_full_timestep_dict_file = open(
                    os.path.join(running_dir,'commits_dict_all_timestep.json'), 'r', encoding='utf-8')
                video_info_full_timestep_dire_file = open(
                    os.path.join(running_dir,'video_info_all_timestep.json'), 'r', encoding='utf-8')
                video_info_full_timestep_dire = json.load(
                    video_info_full_timestep_dire_file)
                all_user_full_timestep_dict = json.load(
                    all_user_full_timestep_dict_file)
                all_commit_full_timestep_dict = json.load(
                    all_commit_full_timestep_dict_file)
            except:
                print("Could not read dictory that contain full timestep")
                print('Disabling timestep add mode ')
                if not_found_exit:
                    global not_found_exit_passed
                    not_found_exit_passed = True
                    exit()
                else:
                    video_info_full_timestep_dire = {}
                    all_user_full_timestep_dict = {}
                    all_commit_full_timestep_dict = {}
                    timestep_add_mode = False

        # Build up the URL address
        url = "https://www.bilibili.com/video/" + video_id

        # timestep_key_dire mode will write each timestep as a file, no need to use contuine mode
        if timestep_key_dire:
            continue_mode_enable = False

        print("已获取链接，等待20秒，确保浏览器完成操作")

        # Smart waiting fuction for waiting upper part done
        upper_not_done = True

        # Scroll down to bottom

        json_get_url = 'https://api.bilibili.com/x/web-interface/view?bvid=' + video_id
        ua_str = ua.random
        oid_dire = requests.get(json_get_url, proxies={"http": "http://{}".format(requests.get(
            "http://localhost:5555/random").text.strip())}, headers={'User-Agent': ua_str}, cookies=cookie_dict)
        oid_dire = oid_dire.text
        video_stat_data = oid_dire
        oid_dire = json.loads(oid_dire)
        oid_dire = oid_dire['data']
        video_info_dire = video_info(video_data=oid_dire)
        if mongodb_switch:
           mongodb_insert(db_client, video_info_table_name, mongodb_db_name, video_info_dire,False, False)

        video_oid = video_info_dire['video_oid']
        if video_info_dire['commit_number'] % 19 != 0:
            max_page = video_info_dire['commit_number'] // 19 + 1
        else:
            max_page = video_info_dire['commit_number'] // 19

        # Make sure all continue mode data is currect
        if continue_mode_enable:
            try:
                user_dict_file = open(file="user_dict.json",
                                      mode="r", encoding="utf-8")
                all_user_dict = json.load(user_dict_file)
            except:
                retry_flag = True
                while retry_flag:
                    retry_input = input(
                        "Could not read user dictionary file, retry or use overwrite mode to collect user information? (R)etry/(O)ver-write:")
                    if retry_input.upper() == "R":
                        retry_flag = True
                    elif retry_input.upper() == "O":
                        all_user_dict = {}
                        over_write_user = True
                        retry_flag = False
                    else:
                        print(
                            "Please check your input, 'R' for retry, 'O' for overwrite-mode")
                        retry_flag = True
            try:
                commit_dict_file = open(file="commits_dict.json",
                                        mode="r", encoding="utf-8")
                all_commit_direct = json.load(commit_dict_file)
            except:
                retry_flag = True
                while retry_flag:
                    retry_input = input(
                        "Could not read comments dictionary file, retry or use overwrite mode to collect comments information? (R)etry/(O)ver-write:")
                    if retry_input.upper() == "R":
                        retry_flag = True
                    elif retry_input.upper() == "O":
                        over_write_comment = True
                        all_commit_direct = {}
                    else:
                        print(
                            "Please check your input, 'R' for retry, 'O' for overwrite-mode")
                        retry_flag = True
            try:
                video_info_dict_file = open(
                    file="video_info.json", mode="r", encoding="utf-8")
                last_video_info_dire = json.load(video_info_dict_file)
            except:
                retry_flag = True
                while retry_flag:
                    retry_input = input(
                        "Could not read video info file for verify , retry or use coutine mode without check video object id? (R)etry/(W)ith-out-verify:")
                    if retry_input.upper() == "R":
                        retry_flag = True
                    elif retry_input.upper() == "O":
                        last_video_info_dire = None
                        retry_flag = False
                    else:
                        print(
                            "Please check your input, 'R' for retry, 'W' for without verify")
                        retry_flag = True
        else:
            all_user_dict, all_commit_direct = init()

        # Failed safe for case of can not read video info
        if continue_mode_enable and last_video_info_dire != None:
            # Failed safe for case of video info is currect
            if continue_mode_enable and video_oid != last_video_info_dire['video_oid']:
                print("Video oject id not match , switch into overwrite mode")
                continue_mode_enable = False
        else:
            continue_mode_enable = False

        page = 1
        print("共计有" + str(max_page) + "页")
        # 初始化结束
        print("开始爬取")
        
        # Start to get the data
        ssl_retry = True
        if page_countine_mode:
            try:
                last_page_file = open(os.path.join(running_dir,"last_page.json"), "r")
                last_page_dict = json.load(last_page_file)
                page = last_page_dict['data']
                page += 1
                last_page_file.close()
            except:
                print("Error while reading progress, reseted")
                last_page_dict = {"data": page}
        # TODO: Try async this processing.
        while page < max_page or page == max_page and ssl_retry:
            try:
                print("正在爬取" + str(page) + "/"+str(max_page) + "页")

                json_get_url = 'https://api.bilibili.com/x/v2/reply?&jsonp=jsonp&pn=' + \
                    str(page)+'&type=1&oid='+str(video_oid)
                # time.strftime("%Y-%m-%d %H:%M:%S %Z", time.localtime())+' '+
                if timestep_file:
                    # Convert timestep to bilibili server format, this will use muilt times
                    json_path = str(page)+'_' + \
                        str(time.time() * 10000000)+'.json'
                else:
                    json_path = str(page)+'.json'
                video_commits_data = requests.get(
                    json_get_url, cookies=cookie_dict, proxies={"http": "http://{}".format(requests.get(
            "http://localhost:5555/random").text.strip())}).text

                video_commits_data_byte = video_commits_data.encode('utf-8')
                video_commits_data = json.loads(video_commits_data)
                if video_commits_data['code'] != 0:
                    raise RuntimeError('Error in fetching video commits, code:{}, message:{}'.format(video_commits_data['code'],video_commits_data['message']))
                # First collect, will include the hot comments and top comments
                if all_in_one and page == 1:
                    all_commit_direct, all_user_dict = commit_json_ana(continue_mode_enable=continue_mode_enable, f=None, is_file=False, page_init=True, json_data=video_commits_data,
                                                                       all_commit_direct=all_commit_direct, all_user_dict=all_user_dict, video_oid=video_oid, timestep_file=timestep_file, timestep_add_mode=timestep_add_mode, timestep_key_dire=timestep_key_dire, all_user_full_timestep_dict=all_user_full_timestep_dict, all_commit_full_timestep_dict=all_commit_full_timestep_dict, cookie_dict = cookie_dict)
                    # 写入数据库
                # This collect will not collect hot comments and top comments, these data is repeated in the data of fllowing pages
                if all_in_one and page > 1:
                    all_commit_direct, all_user_dict = commit_json_ana(continue_mode_enable=continue_mode_enable, f=None, is_file=False, page_init=False, json_data=video_commits_data,
                                                                       all_commit_direct=all_commit_direct, all_user_dict=all_user_dict, video_oid=video_oid, timestep_file=timestep_file, timestep_add_mode=timestep_add_mode, timestep_key_dire=timestep_key_dire, all_user_full_timestep_dict=all_user_full_timestep_dict, all_commit_full_timestep_dict=all_commit_full_timestep_dict, cookie_dict = cookie_dict)
                    # 写入数据库
                # Copy wirte for write_copy mode
                if write_copy:
                    f = open(file=str(json_path), mode="wb")
                    json_data = video_commits_data_byte
                    f.write(json_data)
                    f.close()
                    print('写入成功')
                    # 关闭文件
                    f.close()

                if write_copy_dict:
                    # TODO: add a way to write file using bvid+timestep as name to sprate time step

                    if timestep_key_dire:
                        user_dict_file = open(file="user_dict_all_timestep.json",
                                              mode="w", encoding="utf-8")
                        commit_dict_file = open(file="commits_dict_all_timestep.json",
                                                mode="w", encoding="utf-8")
                        video_info_dict_file = open(
                            file="video_info_all_timestep.json", mode="w", encoding="utf-8")
                        # bilibil timestep example : 1595802663523
                        save_time_step = str(int(round(time.time() * 1000)))
                        all_user_full_timestep_dict[save_time_step] = all_user_dict
                        all_commit_full_timestep_dict[save_time_step] = all_commit_direct
                        video_info_full_timestep_dire[save_time_step] = video_info_dire
                        json.dump(all_user_full_timestep_dict, user_dict_file)
                        json.dump(all_commit_full_timestep_dict,
                                  commit_dict_file)
                        json.dump(video_info_full_timestep_dire,
                                  video_info_dict_file)
                    else:
                        user_dict_file = open(file="user_dict.json",
                                              mode="w", encoding="utf-8")
                        commit_dict_file = open(file="commits_dict.json",
                                                mode="w", encoding="utf-8")
                        video_info_dict_file = open(
                            file="video_info.json", mode="w", encoding="utf-8")
                        json.dump(all_user_dict, user_dict_file)
                        json.dump(all_commit_direct, commit_dict_file)
                        json.dump(video_info_dire, video_info_dict_file)
                    user_dict_file.close()
                    commit_dict_file.close()
                    video_info_dict_file.close()
                    print("Write completed")

                if mongodb_switch:
                    mongodb_insert(db_client,user_table_name, mongodb_db_name,all_user_dict,True,False)
                    mongodb_insert(db_client,comments_table_name, mongodb_db_name,all_commit_direct,True,False)
                    all_commit_direct = {}
                    all_user_dict = {}
                if page_countine_mode:
                    last_page_dict["data"] = page
                    last_page_file = open(
                        file=os.path.join(running_dir,"last_page.json"), mode="w", encoding="utf-8")
                    json.dump(last_page_dict, last_page_file)
                    last_page_file.close()
                    print("Progress saved")
                page = page + 1

            # Deal with Keyboard Quit Signal

            # Deal with Connection Aborted
            except ConnectionAbortedError:
                print("connection lost, waiting for "+sleep_seconds+" seconds")
                time.sleep(sleep_seconds)
                ssl_retry = True

            # Deal with other errors (Now just restart the pages)
            # except:
            #    print("An error occurred, quitting")
            #    time.sleep(sleep_seconds)
            #    ssl_retry = True
try:
    # TODO: Add a multiprocessing grap support on BV level
    main(timestep_file, timestep_add_mode, timestep_key_dire, page_countine_mode, root_dir, bvid_list, all_in_one, write_copy, write_copy_dict, continue_mode_enable, cookie_dict)
except KeyboardInterrupt:

    print("recive siginal to quit")
    print("Saving data")
    # TODO: Add a dictonary null failed safe

    if write_copy_dict:
        # TODO: add a way to write file using bvid+timestep as name to sprate time step

        if timestep_key_dire:
            user_dict_file = open(file="user_dict_all_timestep.json",
                                  mode="w", encoding="utf-8")
            commit_dict_file = open(file="commits_dict_all_timestep.json",
                                    mode="w", encoding="utf-8")
            video_info_dict_file = open(
                file="video_info_all_timestep.json", mode="w", encoding="utf-8")
            # bilibil timestep example : 1595802663523
            save_time_step = str(int(round(time.time() * 1000)))
            all_user_full_timestep_dict[save_time_step] = all_user_dict
            all_commit_full_timestep_dict[save_time_step] = all_commit_direct
            video_info_full_timestep_dire[save_time_step] = video_info_dire
            json.dump(all_user_full_timestep_dict, user_dict_file)
            json.dump(all_commit_full_timestep_dict, commit_dict_file)
            json.dump(video_info_full_timestep_dire, video_info_dict_file)
        else:
            user_dict_file = open(file="user_dict.json",
                                  mode="w", encoding="utf-8")
            commit_dict_file = open(file="commits_dict.json",
                                    mode="w", encoding="utf-8")
            video_info_dict_file = open(
                file="video_info.json", mode="w", encoding="utf-8")
            json.dump(all_user_dict, user_dict_file)
            json.dump(all_commit_direct, commit_dict_file)
            json.dump(video_info_dire, video_info_dict_file)
        user_dict_file.close()
        commit_dict_file.close()
        video_info_dict_file.close()
        print("Write completed")

    exit(1)
except:
    exit()
    if not_found_exit_passed:
        print("Error: Could not find spefeced files")
        exit(1)
    print("Unkown Error, saving data")
    # Wirte result dictonary to file
    if write_copy_dict:
        # TODO: add a way to write file using bvid+timestep as name to sprate time step

        if timestep_key_dire:
            user_dict_file = open(file="user_dict_all_timestep.json",
                                  mode="w", encoding="utf-8")
            commit_dict_file = open(file="commits_dict_all_timestep.json",
                                    mode="w", encoding="utf-8")
            video_info_dict_file = open(
                file="video_info_all_timestep.json", mode="w", encoding="utf-8")
            # bilibil timestep example : 1595802663523
            save_time_step = str(int(round(time.time() * 1000)))
            all_user_full_timestep_dict[save_time_step] = all_user_dict
            all_commit_full_timestep_dict[save_time_step] = all_commit_direct
            video_info_full_timestep_dire[save_time_step] = video_info_dire
            json.dump(all_user_full_timestep_dict, user_dict_file)
            json.dump(all_commit_full_timestep_dict, commit_dict_file)
            json.dump(video_info_full_timestep_dire, video_info_dict_file)
        else:
            user_dict_file = open(file="user_dict.json",
                                  mode="w", encoding="utf-8")
            commit_dict_file = open(file="commits_dict.json",
                                    mode="w", encoding="utf-8")
            video_info_dict_file = open(
                file="video_info.json", mode="w", encoding="utf-8")
            json.dump(all_user_dict, user_dict_file)
            json.dump(all_commit_direct, commit_dict_file)
            json.dump(video_info_dire, video_info_dict_file)
        user_dict_file.close()
        commit_dict_file.close()
        video_info_dict_file.close()
        print("Write completed")


print("爬取结束")
