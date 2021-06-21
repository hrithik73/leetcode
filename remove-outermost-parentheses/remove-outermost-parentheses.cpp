class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        stack <char> stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                stack.push(s[i]);
            else
                stack.pop();
           
                
            if(stack.size()>1 or (stack.size()==1&& s[i]==')'))
                res+=s[i];
       
        }
        
        return res;
    }
};