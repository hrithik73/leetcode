class Solution {
public:
    string interpret(string command) {
        string str1;
        int len=command.size();
        for(int i=0;i<len;i++){
            if(command[i]=='(' && command[i+1]==')'){
                str1+='o';
                i++;
            }
            else if(command[i]=='(' && command[i+3]==')'){
                str1+="al";
                i=i+3;
            }
            else
                str1+=command[i];
        }
        return str1;    
    }
};