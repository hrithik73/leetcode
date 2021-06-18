class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> temp;
        int n=encoded.size();
        temp.push_back(first);
        for(int i=1;i<=n;i++){
            temp.push_back(encoded[i-1]^temp[i-1]);
        }
        return temp;
    }
};