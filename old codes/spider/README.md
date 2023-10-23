# Spider: 采集工具集
## 功能
通过B站的可访问API获取信息，将其转换成可用的数据格式供其他软件访问。
# 快速使用教程链接：施工中
## 运作结构说明
施工中
## 受支持的数据存储形式
名称|支持状态|说明
--|:--:|--
MongoDB|完全支持|默认的存储方式，是一种基于文档的NoSQL数据库
JSON|受限支持|通用的文字数据交换格式，但目前因为在大量数据下会乱码而暂时不建议使用
CSV|未来支持|靠逗号（,）分割数据的一种表格文件，可以被很多办公表格软件使用
SQL数据库|未来支持|使用SQL语言查询的数据库

## 内部参数变量解释
由于尚未实现基于命令行或其他较为人性化的方式添加参数，需要手动改变变量的值才可以使用。
如果需要自定义用途，请改变以下变量。
### api-robot.py
变量|类型|解释|默认值
--|:--:|--:|--
timestep_file|bool|以时间步作为分隔输出文件|False
timestep_add_mode|bool|在遇到相同数据时插入一个指针指向那个相同数据|False
timestep_key_dire|bool|将时间步全部写入一个字典|True
page_countine_mode|bool|存取当前进度供恢复|True
root_dir|string|爬取数据的存放文件夹|
bvid_list|list[string]|需要爬取数据的视频BV号字符串列表|
write_copy|bool|是否将爬取到的原始数据写入JSON|False
write_copy_dict|bool|是否将生成的all_in_one字典保存为JSON文件|False
continue_mode_enable|bool|是否恢复已经保存的进度|True
cookie_dict|bool|存放你的SESSDATA，用于避免反爬虫机制过早断开连接|
mongodb_switch|bool|是否使用MongoDB|False
mongodb_url|string|MongoDB的连接地址，可以从MongoDB的服务器程序上获取
mongodb_db_name|string|存放数据的数据库名字
user_table_name|string|存放用户信息的表格名称
comments_table_name|string|存放评论区数据的表格名称
video_info_table_name|string|存放视频信息的表格名称



