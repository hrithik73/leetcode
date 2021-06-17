class Solution {
public:
    string defangIPaddr(string address) {
        string newString;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                newString+="[.]";
            }
            else
                newString+=address[i];
        }
        return newString;
    }
};