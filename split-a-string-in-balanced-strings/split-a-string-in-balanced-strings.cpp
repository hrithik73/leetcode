class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,result=0,len=s.size();
        
        for(int i=0;i<len;i++){
        if(s[i]=='L')
            count++;
        else
            count--;
        if(count==0)
            result++;
        }
    
        return result;
        
    }
};