class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int res=0,len=points.size();
        
        for(int i=0;i<len-1;i++)
        {
            if(abs(points[i][0]-points[i+1][0])>abs(points[i][1]-points[i+1][1]))
                res+=abs(points[i][0]-points[i+1][0]);
            else
                res+=abs(points[i][1]-points[i+1][1]);
         }
    return res;
    
    }      
    
};