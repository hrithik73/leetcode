class Solution {
public:
    bool checkIfPangram(string sentence) {
        int len=sentence.size();
        bool res=true;
        
        if(len<26)
            return false;        
        for(char i='a';i<='z';i++){
            if(sentence.find(i) != string::npos)
                res = true;
             else{
                 return false;
             }
        }
     return res;
    }      
};