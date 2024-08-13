class Solution {
public:
    int func(int ind,int buy,int cap,vector<int>&a,vector<vector<vector<int>>>&dp)
    {
        if(ind==a.size()||cap==0)
        return 0;

        if(dp[ind][buy][cap]!=-1)
        return dp[ind][buy][cap];


        long profit=0;


        if(buy)
        {
              return dp[ind][buy][cap]=max(-a[ind]+func(ind+1,0,cap,a,dp),0+func(ind+1,1,cap,a,dp));
        }
        
        
        return dp[ind][buy][cap]=max(a[ind]+func(ind+1,1,cap-1,a,dp),0+func(ind+1,0,cap,a,dp));
        

      
        
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
        return func(0,1,k,prices,dp);
        
    }
};