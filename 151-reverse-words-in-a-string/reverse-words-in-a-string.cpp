class Solution {
public:
    string reverseWords(string s) {
         stringstream ss(s);
        string word;
        vector<string> words;

        // Extract words from the string
        while (ss >> word) {
            words.push_back(word);
        }

        // Construct the reversed string
        string result;
        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if (i > 0) result += " ";  // Add space between words
        }

        return result;
    
        
    }
};