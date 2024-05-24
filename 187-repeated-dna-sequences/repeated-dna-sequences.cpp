class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result;
        if (s.length() <= 10) {
            return result;
        }
        
        unordered_map<string, int> sequence_count;

        for (size_t i = 0; i <= s.length() - 10; ++i) {
            string sequence = s.substr(i, 10);
            sequence_count[sequence]++;
        }
        
        for (const auto& pair : sequence_count) {
            if (pair.second > 1) {
                result.push_back(pair.first);
            }
        }
        
        return result;
    }
};
