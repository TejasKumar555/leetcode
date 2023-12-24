class Solution {
public:
    int maxScore(string s) {

        int zeros = 0;
    int ones = count(s.begin(), s.end(), '1');
    
    int maxScore = 0;
    
    // Iterate through the string and calculate the score for each split
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == '0') {
            zeros++;
        } else {
            ones--;
        }
        
        int currentScore = zeros + ones;
        maxScore = max(maxScore, currentScore);
    }
    
    return maxScore;
        
    }
};