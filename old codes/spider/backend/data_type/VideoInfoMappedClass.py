from sqlalchemy import Column, Integer, String, Boolean, Float
from sqlalchemy.orm import declarative_base

Base = declarative_base()

class VideoInfo(Base):
    __tablename__ = "video_info"

    video_id = Column(String, primary_key=True)  # Unique identifier for the video
    title = Column(String, nullable=False)
    description = Column(String)
    uploader_id = Column(Integer)
    view_count = Column(Integer, default=0)
    like_count = Column(Integer, default=0)
    comment_count = Column(Integer, default=0)
    duration = Column(Integer)  # Duration in seconds
    upload_timestamp = Column(Integer)  # Unix timestamp
    is_hd = Column(Boolean, default=False)  # HD or not
    is_vip_only = Column(Boolean, default=False)  # VIP-only content

    def __init__(self, video_id, title, description=None, uploader_id=None, 
                 view_count=0, like_count=0, comment_count=0, duration=0, 
                 upload_timestamp=None, is_hd=False, is_vip_only=False):
        if video_id is None or title is None:
            raise ValueError("Video ID and title cannot be null.")
        self.video_id = video_id
        self.title = title
        self.description = description
        self.uploader_id = uploader_id
        self.view_count = view_count
        self.like_count = like_count
        self.comment_count = comment_count
        self.duration = duration
        self.upload_timestamp = upload_timestamp
        self.is_hd = is_hd
        self.is_vip_only = is_vip_only

    def __repr__(self):
        return (f"<VideoInfo(video_id='{self.video_id}', title='{self.title}', "
                f"view_count={self.view_count}, like_count={self.like_count}, "
                f"comment_count={self.comment_count}, duration={self.duration}, "
                f"is_hd={self.is_hd}, is_vip_only={self.is_vip_only})>")
