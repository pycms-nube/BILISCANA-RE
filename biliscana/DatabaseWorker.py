import atexit
from pymongo import MongoClient

class DatabaseWorker:
    def __init__(self, db_url):
        self.db_url = db_url
        atexit.register(self.ending)

    def ending(self):
        pass

    def mongodb_connect(self):
        try:
            self.db_instance = MongoClient(self.db_url)
            return 0
        except:
            return -1

    def mongodb_disconnect(self):
        if(self.db_instance == None):
            return -1
        else:
            self.db_instance.close()
            return 0

    def mongodb_insert(self):
        pass
    
