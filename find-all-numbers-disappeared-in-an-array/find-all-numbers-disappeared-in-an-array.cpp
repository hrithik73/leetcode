class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,bool> hash;
        vector<int>res;
        
        for(int i=0;i<nums.size();i++){            
            hash[nums[i]]=true;
        }
        for(int i=1;i<=nums.size();i++){
            if(!hash[i])
                res.push_back(i);
        }
        
        return res;
        
    }
};

// 1,2,3,4,5,6,7,8,9
// 4,3,2,7,8,2,3,