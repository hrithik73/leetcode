class Solution {
public:

    
    string reverseWords(string s) {
        int start=0,end;
        string res;
        int len=s.size();

        for(int i=0;i<len;i++){
            if(s[i]==' '){
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
            if(i==len-1){
                reverse(s.begin()+start,s.begin()+i+1);
            }
            
        }
        return s;
        
    }
};