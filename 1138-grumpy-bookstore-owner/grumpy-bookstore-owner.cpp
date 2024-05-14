class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int sum = 0, res = 0, temp = 0;

        // Calculate initial sum of satisfied customers
        for (int i = 0; i < n; i++) {
            if (!grumpy[i]) {
                sum += customers[i];
                customers[i] = 0;
            }
        }

        // Calculate initial temp for the first window
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i]) {
                temp += customers[i];
            }
        }

        res = sum + temp; // Update res with initial values

        // Sliding window approach
        for (int j = minutes; j < n; j++) {
            if (grumpy[j - minutes]) {
                temp -= customers[j - minutes];
            }
            if (grumpy[j]) {
                temp += customers[j];
            }
            res = max(res, sum + temp);
        }

        return res;
    }
};
