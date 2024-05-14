#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> decrypted(n, 0);
        
        if (k == 0) return decrypted; // If k is 0, all elements should be 0.
        
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            if (k > 0) {
                for (int j = 1; j <= k; ++j) {
                    sum += code[(i + j) % n]; // Wrap around to the beginning if index exceeds n.
                }
            } else {
                for (int j = -1; j >= k; --j) {
                    sum += code[(i + j + n) % n]; // Wrap around to the end if index goes below 0.
                }
            }
            decrypted[i] = sum;
        }
        
        return decrypted;
    }
};
