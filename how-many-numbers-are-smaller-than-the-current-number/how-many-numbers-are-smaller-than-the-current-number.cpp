class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> num=nums;
        sort(num.begin(),num.end());      
      
        unordered_map<int,int> map;
        for(int i=0;i<=(num.size()-1);i++){
            if(map.find(num[i])==map.end())
            map[num[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=map[nums[i]];
        }
        
        // for(auto i=map.begin();i!=map.end();i++)
        // cout<<i->first;
        
        return nums;
    }
};