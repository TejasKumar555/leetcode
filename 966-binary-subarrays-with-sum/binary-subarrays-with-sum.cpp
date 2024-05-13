class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> freq;
        freq[0] = 1; // To handle the case when sum - goal == 0
        
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            count += freq[sum - goal];
            freq[sum]++;
        }
        
        return count;
    }
};
