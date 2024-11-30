class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
    
    int n = s.size();
    int left = 0, right = 0, i = 0;
    
    while (i < n) {
        // Skip leading spaces
        while (i < n && s[i] == ' ') i++;
        
        if (i == n) break;  // If no words are left, stop
        
        // Copy the word to its correct position
        if (right > 0) s[right++] = ' ';  // Add space between words
        int start = right;
        while (i < n && s[i] != ' ') s[right++] = s[i++];
        
        // Reverse the current word
        reverse(s.begin() + start, s.begin() + right);
    }
    
    // Resize to remove trailing spaces
    s.resize(right);
    return s;
        
    }
};