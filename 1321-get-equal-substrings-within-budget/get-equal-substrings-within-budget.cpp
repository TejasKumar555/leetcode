class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0;
        int j = 0;
        int cost = 0;
        int len = 0;

        while (j < s.length()) {
            // Add the cost of transforming s[j] to t[j]
            cost += abs(s[j] - t[j]);

            // If the cost exceeds maxCost, adjust the window from the left
            while (cost > maxCost) {
                cost -= abs(s[i] - t[i]);
                i++;
            }

            // Update the maximum length of the valid window
            len = max(len, j - i + 1);

            // Move the right pointer to expand the window
            j++;
        }

        return len;
    }
};
