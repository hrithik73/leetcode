class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int,char> hash;
        string result;
        int len=indices.size();
        for(int i=0;i<len;i++){
            hash[indices[i]]=s[i];
        }
        
        for(int i=0;i<len;i++){
            result.push_back(hash.at(i));
        }
        
        return result;
        
    }
};