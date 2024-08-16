class Solution {
public:
    int change(int amount, vector<int>& coins) {
         vector<vector<int>>dp(coins.size(),vector<int>(amount+1,0));

        for(int t=0;t<=amount;t++)
        {
            if(t%coins[0]==0)
            dp[0][t]=1;
            else
            dp[0][t]=0;
        }

        for(int i=1;i<coins.size();i++)
        {
            for(int t=0;t<=amount;t++)
            {
                int nott=dp[i-1][t];
                int take=0;
                if(coins[i]<=t)
                take=dp[i][t-coins[i]];
                dp[i][t]=take+nott;
            }

          
        }

        

        return dp[coins.size()-1][amount];
        
    }
        
    
};