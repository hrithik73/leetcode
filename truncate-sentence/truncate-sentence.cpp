class Solution {
public:
    string truncateSentence(string s, int k) {
        int len=s.length();
        string resStr;
       
        for(int i=0;i<len;i++){
            if(s[i]==' '){
                k--;
            }
            if(k==0)
                break;
            resStr.push_back(s[i]);
        }
        
        return resStr;
        
        
        
    }
};