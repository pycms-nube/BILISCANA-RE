from sqlalchemy import create_engine
from sqlalchemy.orm import Session,  sessionmaker
from data_type.CommentMapped import Comment
from data_type.UserInfoMapped import UserInfo
from data_type.VideoInfoMappedClass import VideoInfo
import os
import time

class DataBroker:
    _db_file_name = ""
    _engine = None
    _Session = None

    def __init__(self, bvid, overwrite=False):
        """
        Class constructor to initialize the SQLite database file.

        Parameters:
            bvid (str): The base video ID used as a directory.
            overwrite (bool): Flag to indicate whether to overwrite or use the latest timestamped database file.
        """
        self._db_file_name = self._get_db_file_name(bvid, overwrite)
        self.start_db()

    @staticmethod
    def _get_db_file_name(bvid, overwrite):
        """
        Determines the database file name based on the BVID and timestamp.

        Parameters:
            bvid (str): The base video ID used as a directory.
            overwrite (bool): Flag to indicate whether to overwrite or use the latest timestamped database file.

        Returns:
            str: The path to the database file.
        """
        if not os.path.exists(bvid):
            os.makedirs(bvid)

        db_files = [f for f in os.listdir(bvid) if f.endswith('.db')]
        if overwrite and db_files:
            latest_db = db_files[0]
            latest_time = os.path.getmtime(os.path.join(bvid, latest_db))
            for db_file in db_files:
                db_file_time = os.path.getmtime(os.path.join(bvid, db_file))
                if db_file_time > latest_time:
                    latest_time = db_file_time
                    latest_db = db_file
            return os.path.join(bvid, latest_db)
        else:
            timestamp = int(time.time())
            return os.path.join(bvid, f"{timestamp}.db")

    def start_db(self):
        """
        Initializes the SQLAlchemy engine and session factory.
        """
        self._engine = create_engine(f"sqlite:///{self._db_file_name}", echo=False)
        self._Session = sessionmaker(bind=self._engine)
        print(f"Connected to SQLite database: {self._db_file_name}")

    def get_session(self):
        """
        Provides a new SQLAlchemy session.

        Returns:
            Session: A new SQLAlchemy session.
        """
        return self._Session()

    def insert_comment(self, comment: Comment):
        """
        Inserts a Comment object into the database.
        """
        with self.get_session() as session:
            session.add(comment)
            session.commit()

    def insert_user_info(self, user_info: UserInfo):
        """
        Inserts a UserInfo object into the database.
        """
        with self.get_session() as session:
            session.add(user_info)
            session.commit()

    def insert_video_info(self, video_info: VideoInfo):
        """
        Inserts a VideoInfo object into the database.
        """
        with self.get_session() as session:
            session.add(video_info)
            session.commit()
