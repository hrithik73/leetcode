class Solution {
public:
    int maxDepth(string s) {
    int len=s.size(),res=0,count=0;

        for(int i=0;i<len;i++){
            if(s[i]=='(')
                count++;
            else if(s[i]==')')
               count--;
            if(count>res)
                res=count;
               
        }
        return res;               
    }
};
// (1+(2*3)+((8)/4))+1
// 1 2    1 2 3 2 1 0

//(1)+((2))+(((3)))
//1 0 12 10 123 210