class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map <char,string> hash=
        {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        
        
        if (digits.empty()) return {};

        vector<string> res;
        res.push_back("");
        
        for(auto digit:digits){
            vector<string> temp;
            
            for(auto candidate:hash[digit]){
                
                for(auto s:res){
                    temp.push_back(s+candidate);
                }
                
            }
         
            res.swap(temp);
        }
        
       return res;     
       
    }
};