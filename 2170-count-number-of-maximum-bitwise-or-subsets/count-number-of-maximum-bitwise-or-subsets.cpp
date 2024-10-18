class Solution {
public:

    int solve(int i, int ors, int maxi, vector<int>& nums,vector<vector<int>>&dp) {
        if(i >= nums.size()){
            // Base case: if OR of the current subset equals the maximum OR, count it
            return (ors == maxi) ? 1 : 0;
        }

        if(dp[i][ors]!=-1)
        return dp[i][ors];

        // Include the current element in the subset OR
        int cnt = 0;
        cnt += solve(i + 1, ors | nums[i], maxi, nums,dp);
        
        // Exclude the current element from the subset OR
        cnt += solve(i + 1, ors, maxi, nums,dp);
        
        return dp[i][ors]=cnt;
    }

    // Function to count the number of subsets with maximum OR value
    int countMaxOrSubsets(vector<int>& nums) {
        int maxi = 0;

    
        
        // Calculate the maximum OR value from all elements
        for(auto it: nums){
            maxi |= it;
        }

        vector<vector<int>>dp(nums.size()+1,vector<int>(maxi+1,-1));

        // Start recursion from the first element with OR = 0
        return solve(0, 0, maxi, nums,dp);
    }
};