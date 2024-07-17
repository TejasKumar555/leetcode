class Solution {
public:
     int f(int a,int b,vector<vector<int>>&obs,vector<vector<int>>&dp)
    {

        if(a==0&&b==0&&obs[a][b]!=1)
        return 1;
        if (a<0||b<0)
        return 0;


        if(dp[a][b]!=-1)
        return dp[a][b];


        int left=0;
        int right=0;
        if(obs[a][b]!=1)
        left=left+f(a,b-1,obs,dp);
        if(obs[a][b]!=1)
        right=right+f(a-1,b,obs,dp);

        return dp[a][b]=left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {


     int m=obstacleGrid.size();
     int n=obstacleGrid[0].size();
     vector<vector<int>>dp(m,vector<int>(n,-1));

     return f(m-1,n-1,obstacleGrid,dp);   
    }
};