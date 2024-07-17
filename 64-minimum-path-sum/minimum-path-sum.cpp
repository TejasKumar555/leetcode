class Solution {
public:
 long long int f(int a,int b,vector<vector<int>>&obs,vector<vector<int>>&dp)
    {

        if(a==0&&b==0)
        return obs[0][0];
        if (a<0||b<0)
        return INT_MAX;;


        if(dp[a][b]!=-1)
        return dp[a][b];


        
        
        long long int left=obs[a][b]+f(a,b-1,obs,dp);
      
        long long int right=obs[a][b]+f(a-1,b,obs,dp);

        return dp[a][b]=min(left,right);
    }
    int minPathSum(vector<vector<int>>& grid) {

        

        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,grid,dp);
        
    }
};