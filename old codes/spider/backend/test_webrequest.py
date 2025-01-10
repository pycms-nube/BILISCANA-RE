from unittest import TestCase
from webrequest import WebRequest

class TestWebRequest(TestCase):
    def test_get_video_info(self):
        test_use_class = WebRequest()
        (payload, cltime) = test_use_class.get_video_info("BV1y1rYY1E5d")
        print("GOT REPLY")
        print("COLLECT AT: {}".format(cltime))
        print("START PAYLOAD")
        print(payload)
        print("END OF PAYLOAD")