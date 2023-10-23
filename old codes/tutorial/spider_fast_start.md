# 爬虫（Spider）的快速使用方法
**本教程为快速使用，因此按默认配置进行说明**  
**本教程适用于64位Windows系统**
## 准备软件
1. MongoDB
2. Python
3. Docker
4. MongoDB Compass

## 准备流程
1. 前往MongoDB官网下载服务器安装包，安装MongoDB服务器
2. 前往MongoDB Compass官网下载 MongoDB Compass作为数据库图形化操作界面
3. 前往此网址下载Python 3.9.0发行版本
4. 前往Docker官网下载Docker
5. 下载/克隆此项目到本地
6. win+R呼起命令行
7. 转到此项目的spider文件夹下，你会看到有一个proxy_pool的文件夹，请按下方的说明填进指令
8. 运行以下指令安装项目所需的代理池
9. 结束后请前往Docker Desktop检查是否在运行
10. 现在导航至MongoDB的安装路径，双击mongod.exe运行服务器。
11. 请留意出现的超链接，这是你的数据库连接地址。
12. 进入MongoDB Compass，输入你的链接，点击Connect连接到数据库
13. 点击如图所示的位置创建数据库
14. 上方框请填写创建的数据库名称，下方请填写用于视频信息的表格名称，之后点击Create Database
15. 点击如图所示的位置创建表格，我们还差两个表格，用于存放用户信息的表格和用于存放评论信息的表格，每次输入完名字后点击Create Collection创建表格

## 开始使用

