class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size()-1;
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        
        for(int i=1;i<flowerbed.size()-1;i++){
            
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0 ){
                i++;
                n--;
            }
        }
            return n<=0;
            
        
    }
};