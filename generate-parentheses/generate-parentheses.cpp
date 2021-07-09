class Solution {
public:
    
    bool isValid(string str ){
        stack<char> st;
        
        for(int i=0;i<str.size();i++){
            if(str[i]=='(')
                st.push('(');
            else if(st.empty())
                return false;
            else
                st.pop();
        }
        if(!st.empty())
            return false;

        return true;    
    }
        
    void helper(vector<string> &res,string currentStr,int n){
        
        if(currentStr.size()==2*n){
            if(isValid(currentStr)){
                res.push_back(currentStr);
            }    return ;
        }
        
        helper(res,currentStr+'(',n);
        helper(res,currentStr+')',n);
        
    }
    
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string currStr="";
        helper(res,currStr,n);
            
        return res;
    }


};