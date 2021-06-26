class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> hash1;
        unordered_map<char,int> hash2;
        
        if(s.size()!=t.size())
            return false;
        
        for(int i=0;i<s.size();i++){
            if((hash1.find(s[i])==hash1.end()) && (hash2.find(t[i])==hash2.end()))
            {
                hash1[s[i]]=i+1;
                hash2[t[i]]=i+1;
            }
            
            else if((hash1.find(s[i])!=hash1.end()) && (hash2.find(t[i])!=hash2.end())){
                if(hash1[s[i]]!=hash2[t[i]])
                    return false;   
            }
            else
                return false;
        }
        
        return true;        
    
    }
};