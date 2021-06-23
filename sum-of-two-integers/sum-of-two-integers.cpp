class Solution {
public:
    int getSum(int a, int b) {
    
        if(b>0){
        while(b>0){
            a++;
            b--;
        }
      }
        // 5,-5
      if(b<0){
          while(b<0){
          b++;
          a--;
         }
      } 
        
     return a;
        
    }
};