class Comment:
    """
    For this version, we assume what we return
    """
    main_comment_data = {}
    replies = []
    rid = -1
    
    def Comment(self,main_comment_data, replies,rid):
        self.main_comment_data = main_comment_data
        self.replies = replies
        self.rid = rid