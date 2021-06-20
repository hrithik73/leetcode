class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> hash={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
        int len=s.size(),res=0;
        for(int i=0;i<len;){
            if(hash[s[i]]<hash[s[i+1]]){
                res+=(hash[s[i+1]]-hash[s[i]]);       
                i+=2;
            }
            else{
                res+=hash[s[i]];
                i++;
            }
        }
        
        return res;
        
    }
};