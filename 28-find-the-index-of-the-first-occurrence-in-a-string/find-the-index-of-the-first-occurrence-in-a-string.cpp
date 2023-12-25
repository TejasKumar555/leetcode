class Solution {
public:
    int strStr(string h, string n) {


       int i = 0, j = 0;

    while (h[i] != '\0' && n[j] != '\0') {
        if (h[i] == n[j]) {
            i++;
            j++;
        } else {
            i=i-j+1;  // Move i back to the next position in haystack
            j = 0;         // Reset j to 0
        }
    }

    if (n[j] == '\0')
        return (i - j);

    return -1;


        
    }
};