class VideoInfoStruct:
    video_oid = 0
    copyright_type = ""
    picture_add = ""
    post_time_step = ""
    cite_time_step = ""
    description = ""
    owner_data = ""
    owner_mid = ""
    state_data = ""
    view_number = 0
    commit_number = 0
    like_number = 0
    favorite_number = 0
    coin_number = 0
    share_number = 0
    daily_highest_rank = 0
    dislike_number = 0

    def __dict__(self):
        return {
            "video_oid": self.video_oid,
            "copyright_type": self.copyright_type,
            "picture_add": self.picture_add,
            "post_time_step": self.post_time_step,
            "cite_time_step": self.cite_time_step,
            "description": self.description,
            "owner_data": self.owner_data,
            "owner_mid": self.owner_mid,
            "state_data": self.state_data,
            "view_number": self.view_number,
            "commit_number": self.commit_number,
            "like_number": self.like_number,
            "favorite_number": self.favorite_number,
            "coin_number": self.coin_number,
            "share_number": self.share_number,
            "daily_highest_rank": self.daily_highest_rank,
            "dislike_number": self.dislike_number
        }
    
    def __init__(self, video_basic_data) -> None:
        # Basic video info
        self.video_oid = video_basic_data['aid']
        self.copyright_type = video_basic_data['copyright']
        self.picture_add = video_basic_data['pic']
        self.post_time_step = video_basic_data['pubdate']
        self.cite_time_step = video_basic_data['ctime']
        self.desctrion = video_basic_data['desc']

        # Owner info
        self.owner_data = video_basic_data['owner']
        self.owner_mid = self.owner_data['mid']

        # Status info
        self.state_data = video_basic_data['stat']
        self.view_number = self.state_data['view']
        self.commit_number = self.state_data['reply']
        self.favorite_number = self.state_data['favorite']
        self.coin_number = self.state_data['coin']
        self.share_number = self.state_data['share']
        self.daily_highest_rank = self.state_data['his_rank']
        self.like_number = self.state_data['like']
        self.dislike_number = self.state_data['dislike']


    
    