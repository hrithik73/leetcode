class Solution {
public:
   /* BruteForce 
    bool isPalin(string s,int left,int right)
    {
        while(left<right){
            if(s[left]!=s[right])
                return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        
        int len=s.size(),max_len=1;
        string res;
        res.push_back(s[0]);
        
        if(len==0 || len==1)
            return s; 
        
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                
                if(j-i<max_len)
                    continue;

                if(isPalin(s,i,j) && (j-i+1)>max_len){
                    max_len=j-i+1;
                    res=s.substr(i,max_len);
                }
                
            }
            
        }
        
        return res;
    }
    */
    string longestPalindrome(string s) {
        
        int n=s.size();
        string res;
        bool table[n][n];
        
        memset(table,false,sizeof(table));
        
        int max_length=1,start=0;
        
        for(int i=0;i<n;i++)
            table[i][i]=true;
        
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                table[i][i+1]=true;
                start=i;
                max_length=2;
            }
        }
        
        for(int k=3;k<=n;k++){
         
            for(int i=0;i<n-k+1;i++){
                
                //Getting The End Position
                int j=i+k-1;
                
                if(table[i+1][j-1] && s[i]==s[j]){
                    table[i][j]=true;
                
                if(k>max_length){
                    max_length=k;
                    start=i;
                }
              }
            }
        }
        
        res=s.substr(start,max_length);
        
        return res;
    }    
};