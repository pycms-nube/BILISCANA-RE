from sqlalchemy import Column, String, Integer, Boolean
from sqlalchemy.orm import declarative_base

Base = declarative_base()

class UserInfo(Base):
    __tablename__ = 'user_info'

    user_id = Column(Integer, primary_key=True)  # Unique ID for database, input only
    user_name = Column(String, nullable=False)
    sign = Column(String)
    avatar_image_address = Column(String)
    sex = Column(String)
    user_level = Column(Integer)
    has_nameplate = Column(Boolean)
    nameplate_kind = Column(String)
    nameplate_name = Column(String)
    nameplate_image = Column(String)
    nameplate_image_small = Column(String)
    nameplate_level = Column(String)
    nameplate_condition = Column(String)
    has_vip = Column(Boolean)
    vip_type = Column(Integer, nullable=True)
    fans_detail = Column(String, nullable=True)
    fans_level = Column(Integer, nullable=True)
    offical_type = Column(Integer, nullable=True)
    offical_desctrion = Column(String)
    vip_due_timestep = Column(Integer, nullable=True)
    last_same = Column(String)

    def __init__(self, user_id, user_name, sign=None, avatar_image_address=None, sex=None, user_level=None, has_nameplate=None, 
                 nameplate_kind=None, nameplate_name=None, nameplate_image=None, nameplate_image_small=None, 
                 nameplate_level=None, nameplate_condition=None, has_vip=None, vip_type=None, fans_detail=None, 
                 fans_level=None, offical_type=None, offical_desctrion=None, vip_due_timestep=None, last_same=None):
        self.user_id = user_id
        self.user_name = user_name
        self.sign = sign
        self.avatar_image_address = avatar_image_address
        self.sex = sex
        self.user_level = user_level
        self.has_nameplate = has_nameplate
        self.nameplate_kind = nameplate_kind
        self.nameplate_name = nameplate_name
        self.nameplate_image = nameplate_image
        self.nameplate_image_small = nameplate_image_small
        self.nameplate_level = nameplate_level
        self.nameplate_condition = nameplate_condition
        self.has_vip = has_vip
        self.vip_type = vip_type
        self.fans_detail = fans_detail
        self.fans_level = fans_level
        self.offical_type = offical_type
        self.offical_desctrion = offical_desctrion
        self.vip_due_timestep = vip_due_timestep
        self.last_same = last_same

    def __repr__(self):
        return (f"<UserInfo(user_id={self.user_id}, user_name='{self.user_name}', sex='{self.sex}', user_level={self.user_level}, "
                f"has_vip={self.has_vip}, vip_type={self.vip_type}, fans_level={self.fans_level})>")
