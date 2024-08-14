class Solution {
public:
    int func(int ind,int buy,int f,vector<int>&a,vector<vector<long>>&dp)
    {
        if(ind==a.size())
        return 0;

        if(dp[ind][buy]!=-1)
        return dp[ind][buy];


        long profit=0;


        if(buy)
        {
            profit=max(-a[ind]+func(ind+1,0,f,a,dp),0+func(ind+1,1,f,a,dp));
        }
        else
        {
            profit=max((a[ind]-f)+func(ind+1,1,f,a,dp),0+func(ind+1,0,f,a,dp));
        }

        return dp[ind][buy]=profit;
        
    }
    int maxProfit(vector<int>& prices,int fee) {
        int n=prices.size();

        vector<vector<long>> dp(n, vector<long>(2, -1));
        return func(0,1,fee,prices,dp);
        
    }
};