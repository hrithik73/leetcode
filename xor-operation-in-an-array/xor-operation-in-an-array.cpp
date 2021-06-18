class Solution {
public:
    int xorOperation(int n, int start) {
        int result=0,x=0;
        vector<int> nums;
        
        for(int i=0;i<n;i++){
            x=start+2*i;
            result=result^x;
        }
        return result;
    }
};