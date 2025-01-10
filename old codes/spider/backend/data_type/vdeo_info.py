class VideoInfo:
    __data = {}
    def differntical_merge(self, in_data):
        # Pair by pair merge
        for cur_key in self.__data.keys():
            if in_data[cur_key] != self.__data[cur_key]:
                #update difference 
                self.__data[cur_key] = in_data[cur_key]
    
    
    def VideoInfo(self):
        self.__data = {}

    def VideoInfo(self, in_data):
        # Due to python lacking some type, here we defined a map to route 
        if type(in_data) == dict:
            if self.__data != {}:
                self.differntical_merge(in_data)
            else:
                self.__data = in_data
        pass
    
