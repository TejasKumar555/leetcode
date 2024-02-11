class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length() - 1;
        char t1, t2;

        while (i < j) {
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            t1 = tolower(s[i]);
            t2 = tolower(s[j]);

            if (t1 != t2) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};