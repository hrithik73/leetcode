class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map <char,int> hash;
        unordered_map <char,int> temp;
        bool flag=false;
        int count=0;
        
        for(int i=0;i<chars.size();i++)
        {
          hash[chars[i]]++;
        }
    
        for(int i=0;i<words.size();i++){
             temp=hash;
             flag=false;
             string word=words[i];
             for(int j=0;j<word.size();j++){
                   if(temp[word[j]]){
                       temp[word[j]]--;
                   }
                else{
                    flag=true;
                    break;
                }
             }
            if(!flag)
                count+=word.size();
                
        }
        return count;
        
    }
};