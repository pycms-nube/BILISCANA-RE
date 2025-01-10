import gevent as gr
import json
import requests
import time


class WebRequest:
    _delay = 220  # Delay in milliseconds
    _cookie = None  # Login cookies if needed
    #FIXME: Something is wrong with grevent, it says I didn't pass in any args into the requests.get
    @staticmethod
    def request_api(request_url:str):
        """Handles a web request with greenlet."""
        gr.sleep(WebRequest._delay / 1000.0)
        worker = gr.spawn(requests.get, request_url)
        worker.join()
        if worker.value.status_code != 200:
            raise RuntimeError(f"Request failed: {worker.value.status_code} {worker.value.reason}")
        return worker.value.content.decode('utf-8')

    @staticmethod
    def get_video_info(video_id:str):
        """Fetches video information from the API."""
        url = f"https://api.bilibili.com/x/web-interface/view?bvid={video_id}"
        response = WebRequest.request_api(url)
        return json.loads(response), time.time()

    @staticmethod
    def get_comments(video_oid:str|int, page:str|int = 1):
        """Fetches comments for a given video OID and page."""
        url = f"https://api.bilibili.com/x/v2/reply?&jsonp=jsonp&pn={page}&type=1&oid={video_oid}"
        response = WebRequest.request_api(url)
        return json.loads(response), time.time()

    @staticmethod
    def get_replies(video_oid:str|int, root_rid:str|int, root_timestep:str|int):
        """Fetches replies for a comment based on its root ID."""
        url = f"https://api.bilibili.com/x/v2/reply/reply?&jsonp=jsonp&pn=1&type=1&oid={video_oid}&ps=10&root={root_rid}&_={root_timestep}"
        response = WebRequest.request_api(url)
        comment_data = json.loads(response)
        if comment_data['data']['page']['count'] == 0:
            return False, {}, 0, 0, time.time()
        else:
            page_info = comment_data['data']['page']
            return True, comment_data['data'], page_info['count'], page_info['size'], time.time()


