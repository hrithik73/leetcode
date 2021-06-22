class Solution {
public:
    bool isHappy(int n) {   
            int digit,res=0;
            if(n==1 or n==7)
                return true;
            else if(n<=9)
                return false;
            else{      
                for(int i=n;i>0;i/=10){
                digit=i%10;
                res+=(digit*digit);
                n=res;
                }
        return isHappy(n);
                
            }
    }
};