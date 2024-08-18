# This module will handle the web requests
import requests as req
import gevent as gr
import uuid as uuidlib
import requests
import json

class WebRequest:
    _delay = 220
    _worker_pool = gr.pool.Pool(1)
    # Here is the login cookie, attach when we need to make request
    _cookie = None
    def request_api(request_url):
        gr.sleep(WebRequest._delay)
        worker = gr.spawn(requests.get, request_url)
        worker.join()
        # need a error handle in here
        return worker.value.content.decode('utf-8')
    
    # This helper function will help getting comments as needed
    # In the old code, related code is too complex and not decouple from resolver
    def request_comment_api(video_oid, page=1):
        json_get_url = "https://api.bilibili.com/x/v2/reply?&jsonp=jsonp&pn={}&type=1&oid={}".format(page, video_oid)
        result = WebRequest.request_api(json_get_url)
        # Error handling here pending
        return result
    
    # This helper function use to get if replies do exits, if so, also return count and data of it
    def request_replies(video_oid, root_rid, root_timestep):
        replies_full_url = "https://api.bilibili.com/x/v2/reply/reply?&jsonp=jsonp&pn={}&type=1&oid={}&ps=10&root={}&_={}".format(
        1, video_oid, root_rid, root_timestep)
        result = WebRequest.request_api(replies_full_url)
        # Here we need to decode the json data
        comment_data = json.loads(result)
        if comment_data["data"]["page"]["count"] == 0:
            return False, {},0,0
        else:
            return True, comment_data["data"], comment_data["data"]["page"]["count"], comment_data["data"]["page"]["size"]
        
    
        
    