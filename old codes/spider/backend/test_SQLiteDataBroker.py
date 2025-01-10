from unittest import TestCase

from sqlalchemy import false

from SQLiteDataBroker import DataBroker


class TestDataBroker(TestCase):
    def test_start_db(self):
        self.fail()

    def test_init(self):
        bvid = "BVSK48a"
        DataBroker(bvid, False)

