import jieba
from collections import Counter
from tqdm import tqdm
import pandas as pd
from pymongo import MongoClient
from string import punctuation
ch_p = '，。、【 】 “”：；（）《》‘’{}？！⑦()、%^>℃：.”“^-——=&#@￥ '
all_p=punctuation+ch_p

mongodb_url = ''
mongodb_db_name = ''
comments_table_name = ''
clean_punctions = True
report_tree = ""

db_client = MongoClient(mongodb_url)
database = db_client[mongodb_db_name]
table = database[comments_table_name]
data_handeler = table.find()
counter = Counter()
# Droping issiue: count() need to be replaced with collections.count_doucment()
for comment in tqdm(data_handeler,'Processing',data_handeler.count()):
    message = comment['message']
    tk_list = jieba.cut(message)
    if clean_punctions:
        clean_tk = []
        for tk in tk_list:
            if tk not in all_p:
                clean_tk.append(tk)
        clean_str = ''.join(clean_tk)
        tk_list = jieba.cut(clean_str)
    for tk in tk_list:
        counter[tk] = counter[tk] + 1
    
print("Exporting as CSV")
result = counter.most_common()
element_list = []
num_list = []
for element, num in tqdm(result,'translating'):
    element_list.append(element)
    num_list.append(num)

dataframe_dict = {'词语':element_list, '数量':num_list}
dataframe = pd.DataFrame(dataframe_dict)
dataframe.to_csv(report_tree,encoding='utf-8-sig')
pass