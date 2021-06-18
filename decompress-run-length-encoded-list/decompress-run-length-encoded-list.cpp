class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> temp;
        int n=nums.size();
        
        for(int i=0;i<n;i=i+2){
            int j=nums[i];
            while(j>0){
                temp.push_back(nums[i+1]);
                j--;
            }
        }
        return temp;
        
    }
};