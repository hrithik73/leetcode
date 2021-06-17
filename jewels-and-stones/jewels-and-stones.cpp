class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    unordered_map<char, int> hash;
        for(int i=0;i<jewels.size();i++){
            hash[jewels[i]]=0;
        }
        int res=0;
        for(int j=0;j<stones.size();j++){
            if(hash.find(stones[j])!=hash.end()){
                  res++;  
            }
        }
        return res;
    }
};