class MyHashSet {

public:
    vector<int> res;
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        auto it=find (res.begin(),res.end(), key);
        if(it==res.end())
            res.push_back(key);
            
    }
    
    void remove(int key) {
        auto it=find (res.begin(),res.end(), key);
        if(it!=res.end())
            res.erase(it);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        auto it=find(res.begin(),res.end(), key);
         return it!=res.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */