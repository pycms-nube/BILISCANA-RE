from sqlalchemy import Column, Integer, String, Boolean, Float
from sqlalchemy.orm import declarative_base

Base = declarative_base()

class Comment(Base):
    __tablename__ = "rootcomments"

    rid = Column(Integer, primary_key=True)
    cltimestamp = Column(Integer)
    message = Column(String)
    owner_uid = Column(Integer)
    like_number = Column(Integer, default=0)
    has_replies = Column(Boolean, default=False)
    is_top = Column(Boolean, default=False)
    is_hot = Column(Boolean, default=False)
    collect_time = Column(Float)

    def __init__(self, rid: int, cltimestamp: int, message: str, owner_uid: int, 
                 like_number: int = 0, has_replies: bool = False, 
                 is_top: bool = False, is_hot: bool = False, collect_time: float = None):
        if rid is None or cltimestamp is None or message is None:
            raise NotImplementedError("Default constructor is not implemented for security reasons.")
        self.rid = rid
        self.cltimestamp = cltimestamp
        self.message = message
        self.owner_uid = owner_uid
        self.like_number = like_number
        self.has_replies = has_replies
        self.is_top = is_top
        self.is_hot = is_hot
        self.collect_time = collect_time

    def __repr__(self):
        return (f"<Comment(rid={self.rid}, cltimestamp={self.cltimestamp}, message='{self.message}', "
                f"owner_uid={self.owner_uid}, like_number={self.like_number}, "
                f"has_replies={self.has_replies}, is_top={self.is_top}, is_hot={self.is_hot}, "
                f"collect_time={self.collect_time})>")
