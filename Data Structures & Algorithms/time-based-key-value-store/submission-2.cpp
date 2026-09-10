class TimeMap {
public:
    unordered_map<string,unordered_map<int,string>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end())
        return "";
        int seen=-1;
        for(auto i: mp[key])
        {
            if(i.first<=timestamp)
            seen=max(seen,i.first);
        }
        return seen==-1 ? "":mp[key][seen];
    }
};
