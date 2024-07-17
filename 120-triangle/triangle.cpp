class Solution {
public:


    int f(int a,int b,vector<vector<int>>&t,vector<vector<int>>&dp)
    {

        int n=t.size();
        int m=t[0].size();

        if(dp[a][b]!=-1)
        return dp[a][b];
        if(a==n-1)
        {
            return t[a][b];
        }

        

        int l=t[a][b]+f(a+1,b,t,dp);
        int d=t[a][b]+f(a+1,b+1,t,dp);

        return dp[a][b]=min(l,d);
    }
    int minimumTotal(vector<vector<int>>& triangle) {

        int n=triangle.size();
        int m=triangle[0].size();

        vector<vector<int>> dp(n,vector<int>(n,-1));

        return f(0,0,triangle,dp);
        
    }
};