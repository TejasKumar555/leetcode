class Solution {
public:

    int f(int a,int b,vector<vector<int>>&dp)
    {
        if(a==0&&b==0)
        return 1;
        if (a<0||b<0)
        return 0;


        if(dp[a][b]!=-1)
        return dp[a][b];




        int left=0;
        int right=0;

        left=left+f(a,b-1,dp);
        right=right+f(a-1,b,dp);

        return dp[a][b]=left+right;
    }
    int uniquePaths(int m, int n) {


        vector<vector<int>> dp(m,vector<int>(n,-1));



        return f(m-1,n-1,dp);
        
    }
};