import pandas as pd
import json

dict_input_path = ""
csv_output_path = ""
csv_rows = []
dict_file = open(dict_input_path, encoding='utf-8')
process_dict = json.load(dict_file)
dict_file.close()
for key in process_dict.keys():
    
    timestep_dict = process_dict[key]
    for sub_key in timestep_dict.keys():
        row_dict = timestep_dict[sub_key]
        row_dict['collect_timestep'] = sub_key
        csv_rows.append(row_dict)

csv_frame = pd.DataFrame(csv_rows)
csv_frame.to_csv(csv_output_path)