class Solution {
public:
    int minOperations(string s) {

       int n = s.length();
    
    // Count the number of operations starting with '0'
    int countStartWithZero = 0;
    for (int i = 0; i < n; i++) {
        countStartWithZero += (s[i] - '0' != i % 2);
    }

    // Count the number of operations starting with '1'
    int countStartWithOne = 0;
    for (int i = 0; i < n; i++) {
        countStartWithOne += (s[i] - '0' == i % 2);
    }

    // Return the minimum of the two cases
    return min(countStartWithZero, countStartWithOne);
        
    }
};