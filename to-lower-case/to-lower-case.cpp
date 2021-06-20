class Solution {
public:
    string toLowerCase(string s) {
        string res;
        for(char c:s){
            if( c>=65 && c<=90){
                res.push_back(c+32);
            }
            else{
                res.push_back(c);
            }
        }
        return res;
    }
};