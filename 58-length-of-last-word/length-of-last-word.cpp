class Solution {
public:
    int lengthOfLastWord(string s) {


     int length = 0;

    // Iterate from right to left
    for (int i = s.length() - 1; i >= 0; --i) {
        // Skip trailing spaces
        if (s[i] == ' ' && length == 0) {
            continue;
        }

        // Break when encountering the first non-space character
        if (s[i] != ' ') {
            ++length;
        } else {
            break;
        }
    }

    return length;


       
        
    }
};