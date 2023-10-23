class TaskStructure:
    # TaskStructure class to store the task details
    task_id = "" #Should be a uuid
    json_info = "" #Should be a json object from whatever the requested is from
    finish_event = None #Should be a finish event
    login_cookie = None #Should be a login cookie
    current_page = None #For video case, since the comment pages somehow will have different format in 1st page
    
    # for video cases
    def __init__(self, finish_event, login_cookie, current_page):
        self.finish_event = finish_event
        self.login_cookie = login_cookie
        self.current_page = current_page

    # For non-video tasks
    def __init__(self, task_id, json_info):
        self.task_id = task_id
        self.json_info= json_info
        #TODO: Binding a Finish task event into the TaskStructure class


    
    def ending(self):
        self.task_id = None
        self.json_info = None

