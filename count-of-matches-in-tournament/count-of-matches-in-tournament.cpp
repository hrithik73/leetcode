class Solution {
public:
    int numberOfMatches(int n) {
      int res=0;
        while(n>1){
           if(n%2==0){
               n=n/2;
               res+=n;
           }
            else{
                res+=(n-1)/2;
                n=((n-1)/2)+1;
              
            }
       }
        return res; 
    }
};

//14/2->7 7 
//7/2->3 4
//4/2->2 2
//2/2->1 1