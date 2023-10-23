from pymongo import MongoClient
import pandas as pd
from tqdm import tqdm

# Hamin Length is the number of characters need to changed in order to turn into another string.
# In here, our similiarlity use P = 1 - (HamminLength/LongestStringLength)
# In normally, similliarlity use different characters numbers to measure how many different in there.
# Because it's based on characters, there is no cheat on no meaning charater insert to attack. If the attacker wants to sucess, they need to change entire comment, which is not readble for human.

client = MongoClient('')
foucus_keywords = []
collect_times = []
filter={}

result = client[''][''].find(
  filter=filter
)
maxium_legth = 0
# Mesure Length
for i in tqdm(result, 'Finding Maxium Length', result.count()):
    message = i['message']
    obj_id = i['_id']
    for s in result:
      if s['_id'] == obj_id:
        contuine
      




