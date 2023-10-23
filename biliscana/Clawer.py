import threading
import atexit
import requests
import gevent
from TaskStructure import TaskStructure
from VideoInfoStruct import VideoInfoStruct
class Clawer :
    # Class Clawer is used for getting data from Bili
    # It's desinged to be initied when scheculder decide when it needed, and reuse through out the program
    _uuid = ""
    finsish_sheculder_call = threading.Event # Here we use a Event to notify the scheculder when we finished
    error_event_call = threading.Event # Here we use a Event to notify the scheculder when we finishe
    web_error_event_call = threading.Event # Here we use a Event to notify the scheculder when we finishe
    def __init__(self, uuid, finish_event_scheculder):
        self.uuid = uuid
        self.finsish_sheculder_call = finish_event_scheculder # Get the event from scheculder
        atexit.register(self.ending) # Register ending function to be called when program ends

    def ending(self):
        #TODO: Just write a fun ending 
        pass 
    
    def web_error(self):
        # For now, this is only a adapater for the error event
        self.error_event_call.set()
        # When we futher improve auto-recover function, it will exapnd to do auto recover preparesion
    
    def get_video_info(self, BVID):
        tmp_task = TaskStructure()
        tmp_task.BVID = BVID
        try:
            tmp_greenlet = gevent.spawn(requests.get("https://api.bilibili.com/x/web-interface/view?bvid=" + BVID).json())
            tmp_task.json_info = tmp_greenlet.get()
        except:
            self.web_error()
            return None
        
        return VideoInfoStruct(tmp_task.json_info)
    
    
    


        

