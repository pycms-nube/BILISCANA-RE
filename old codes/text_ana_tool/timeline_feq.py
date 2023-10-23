import re
from pymongo import MongoClient
import pandas as pd
# Requires the PyMongo package.
# https://api.mongodb.com/python/current

client = MongoClient('')
foucus_keywords = []
collect_times = []
filter={}

result = client[''][''].find(
  filter=filter
)
for comment in result:
    timestep = comment['time']
    collect_times.append(timestep)

report_dict = {"ALL":collect_times}
dataframe = pd.DataFrame(report_dict)
dataframe.to_csv("")
