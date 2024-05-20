class Solution {
public:
    int subsetXORSum(vector<int>& nums) {



       int n = nums.size();
        int totalSum = 0;
        int numSubsets = 1 << n;  // This is 2^n
        
        for (int i = 0; i < numSubsets; i++) {
            int currentXOR = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {  // Check if the j-th element is in the subset
                    currentXOR ^= nums[j];
                }
            }
            totalSum += currentXOR;
        }
        
        return totalSum;
    }
};