class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int sum = 0, res = 0, temp = 0;
        
        // Calculate the initial satisfied customers when the owner is not grumpy
        for (int i = 0; i < n; ++i) {
            if (!grumpy[i]) {
                sum += customers[i];
                customers[i] = 0; // Marking as 0 to indicate already satisfied
            }
        }
        
        int i = 0, j = 0;
        while (j < n) {
            if (grumpy[j]) {
                temp += customers[j]; // Accumulate grumpy customers
            }
            // Adjusting the window size
            if (j - i + 1 < minutes) {
                ++j; // Expand the window
            } else { // Window size reaches minutes
                res = max(res, sum + temp);
                if (grumpy[i]) {
                    temp -= customers[i]; // Update temp if customer left the window
                }
                ++i; // Move the window start
                ++j; // Move the window end
            }
        }
        
        return res;
    }
};
