class Solution {
public:
    bool checkValidString(string s) {
        int openMin = 0; // Minimum number of open parentheses needed
        int openMax = 0; // Maximum number of open parentheses possible

        for (char c : s) {
            if (c == '(') {
                openMin++;  // We need one more open parenthesis
                openMax++;  // We can have one more open parenthesis
            } else if (c == ')') {
                openMin--;  // We need one less open parenthesis
                openMax--;  // We can have one less open parenthesis
            } else { // c == '*'
                openMin--;  // '*' could be a closing parenthesis
                openMax++;  // '*' could be an opening parenthesis
            }

            // If openMax is negative, it means we have more closing parentheses than possible openings
            if (openMax < 0) {
                return false;
            }

            // Ensure openMin does not drop below 0
            if (openMin < 0) {
                openMin = 0;
            }
        }

        // If openMin is 0, it means all open parentheses can be matched
        return openMin == 0;
        
    }
};