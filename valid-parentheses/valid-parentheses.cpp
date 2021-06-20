class Solution {
public:
    bool isValid(string s) {
        int len=s.size();
        stack <char> stack;
        

        
        for(int i=0;i<len;i++)
        { 
             if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stack.push(s[i]);
            else{
                if(!stack.empty() && (stack.top()=='(' &&s[i]==')') ||
                   !stack.empty() && (stack.top()=='{' && s[i]=='}') ||
                    !stack.empty() && (stack.top()=='[' && s[i]==']'))
                stack.pop();
                else 
                return false;
            }
        }    
        
      return stack.empty();
        
        
        }
    
};