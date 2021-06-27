class Solution {
public:

    
    string reverseWords(string s) {
        int start=0,end;
        string res;
        int len=s.size();

        for(int i=0;i<len;i++){
            if(s[i]==' '){
                for(int j=i-1;j>=start;j--)
                    res.push_back(s[j]);
                    res.push_back(' ');
                start=i+1;
            }  
            
            if(i==len-1){
                for(int j=i;j>=start;j--)
                    res.push_back(s[j]);
            }
            
        }
        
        return res;
        
    }
};