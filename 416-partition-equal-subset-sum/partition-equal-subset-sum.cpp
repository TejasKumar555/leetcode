class Solution {
public:
    bool f(int ind,int target,vector<int>&a,vector<vector<int>>&dp)
    {
        if(target==0)
        return true;
        if(ind==0)
        return (a[0]==target);
        
        if(dp[ind][target]!=-1)
        return dp[ind][target];
        
        bool not_take=f(ind-1,target,a,dp);
        bool take=false;
        
        if(target>=a[ind])
        take=f(ind-1,target-a[ind],a,dp);
        
        return dp[ind][target]=(take||not_take);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;

        for(int i=0;i<nums.size();i++)
        sum+=nums[i];

        if(sum%2==1)
        return false;

        int req=sum/2;


        

        vector<vector<int>>dp(nums.size(),vector<int>(req+1,-1));
        return f(nums.size()-1,req,nums,dp);
        
        
    }
};