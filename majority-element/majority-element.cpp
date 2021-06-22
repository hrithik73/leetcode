class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),max=0,tempMax=0;
        unordered_map<int,int> hash;
        
        for(int i=0;i<n;i++){
            if(hash.count(nums[i])){
                hash[nums[i]]++;
                continue;
            }
            hash[nums[i]]=1;
        }
        
        for( auto i=hash.begin();i!=hash.end();i++){
            if((i->second)>hash[max])
                max=i->first;
            cout<<i->first<<" "<<i->second<<'\n';
            
        }
    
        return max;
        
    }
};