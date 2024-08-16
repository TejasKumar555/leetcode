class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {


        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,0));

        for(int t=0;t<=amount;t++)
        {
            if(t%coins[0]==0)
            dp[0][t]=t/coins[0];
            else
            dp[0][t]=1e9;
        }

        for(int i=1;i<coins.size();i++)
        {
            for(int t=0;t<=amount;t++)
            {
                int nott=0+dp[i-1][t];
                int take=INT_MAX;
                if(coins[i]<=t)
                take=1+dp[i][t-coins[i]];
                dp[i][t]=min(take,nott);
            }

          
        }

        int ans=dp[coins.size()-1][amount];
        if(ans>=1e9)
        return -1;

        return ans;
        
    }
};