class Solution {
public:
    int func(int ind,int buy,vector<int>&a,vector<vector<long>>&dp)
    {
        if(ind==a.size())
        return 0;

        if(dp[ind][buy]!=-1)
        return dp[ind][buy];


        long profit=0;


        if(buy)
        {
            profit=max(-a[ind]+func(ind+1,0,a,dp),0+func(ind+1,1,a,dp));
        }
        else
        {
            profit=max(a[ind]+func(ind+1,1,a,dp),0+func(ind+1,0,a,dp));
        }

        return dp[ind][buy]=profit;
        
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        vector<vector<long>> dp(n, vector<long>(2, -1));
        return func(0,1,prices,dp);
        
    }
};