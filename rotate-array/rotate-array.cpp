class Solution {
public:
  
//     void reverseArray(vector<int>&nums,int start,int end){
//         int temp=0;
//         while(start<end){
//             temp=nums[start];
//             nums[start]=nums[end];
//             nums[end]=temp;
//             start++;
//             end--;
//         }
//     }
    
    
    void rotate(vector<int>& nums, int k) {
//         if(k==0)
//             return;
//         if(k>nums.size())
//             k=k%nums.size();
            
//         reverseArray(nums,0,nums.size()-1);
//         reverseArray(nums,0,k-1);
//         reverseArray(nums,k,nums.size()-1);
        
         k %=nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
    
    
};

// 7 6 5 4 3 2 1
// 5 6 7 4 3 2 1
// 5 6 7 1 2 3 4