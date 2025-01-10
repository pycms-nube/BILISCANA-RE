from Clawer import Clawer
class Scheculder:
    total_pages = 0
    bvid_list = []
    

    def __init__(self):
        pass
    
    def manual_add_BVID(self):
        isEnd = True
        while(isEnd):
            bvid = input("请输入BVID:")
            if(bvid == ""):
                isEnd = False
            else:
                self.bvid_list.append(bvid)
        pass
    def start_claw(self):
        for bvid in self.bvid_list:
            video_info = Clawer.get_video_info(bvid)
            # Determine the number of pages
            if(video_info.commit_number % 19 != 0):
                self.total_pages = video_info.commit_number // 19 + 1
            else:
                self.total_pages = video_info.commit_number // 19

            
        pass

    

