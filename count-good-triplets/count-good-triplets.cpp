class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
       int len=arr.size(),res=0;
        
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                    if(abs(arr[i]-arr[j])<=a){
                          for(int k=j+1;k<len;k++){
                              if(abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c)
                                    res++;
                          }
                        
                    }
                         
                }
            }
    return res;
        
    }

};