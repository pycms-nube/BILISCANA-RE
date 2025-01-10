# Here is all analyze and task making functions
import gevent as ge
import webrequest
from data_type.CommentMapped import Comment
class Scheculder:
    # FIXME: Damn it I use the greenlet in wrong way, change all span to what it supposes to be.
    # Get all replies from a specific page
    @staticmethod
    def get_replies(video_oid:str|int, page_num:int):
            
        task = ge.spawn(webrequest.WebRequest.get_comments,video_oid, page_num)
        ge.joinall(task)
        comment_data, collect_timestamp = task.value
        del task
        comment_task_inputs = []
        write_queue = []
        comment_task_inputs.extend(comment_data['data']['replies'])
        for comment,clttime in zip(comment_data['data']['replies'], collect_timestamp):
            rid = comment['rid']
            message = comment['message']
            owner_uid = comment['owner_uid']
            like_num = comment['like_number']
            write_queue.append(Comment(rid, int(clttime),message, int(owner_uid), int(like_num), collect_time=clttime))
        if page_num != 0:
            comment_task_inputs.extend(comment_data['data']['top'])
            comment_task_inputs.extend(comment_data['data']['hots'])
        task_queue = []
        #TODO: We need to tell the system to write something here.

        for comment in comment_task_inputs:
            task_queue.append(ge.spawn(webrequest.WebRequest.get_replies,video_oid, int(comment['rpid']), int(collect_timestamp)))
        
        ge.joinall(task_queue)
        for cur_task in task_queue:
            flag, data, count, size, timestamp = cur_task.value
            if flag:

            