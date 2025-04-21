class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        if (n == 0) return result;

        int start = nums[0]; // Start of the current range

        for (int i = 1; i <= n; ++i) {
            // If it's the end OR current number is not consecutive to the previous
            if (i == n || nums[i] != nums[i - 1] + 1) {
                // If start and end are same, it's a single number range
                if (start == nums[i - 1]) {
                    result.push_back(to_string(start));
                } else {
                    result.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                }

                // Update start to current number if we're not at the end
                if (i < n) start = nums[i];
            }
        }

        return result;
        
    }
};