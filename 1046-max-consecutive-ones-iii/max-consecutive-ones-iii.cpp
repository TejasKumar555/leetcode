class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

       int l = 0, r = 0, zeroes = 0, maxlen = 0;

        while (r < nums.size()) {
            if (nums[r] == 0) {
                zeroes++;
            }

            // If the number of zeroes exceeds k, shrink the window
            while (zeroes > k) {
                if (nums[l] == 0) {
                    zeroes--;
                }
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
        
    }
};