class Solution {
public:
    string minWindow(string s, string t) {

        int n = s.size();
        int m = t.size();
        if(n < m ) return "";

        unordered_map<char,int> mp;
        int count = 0;
        for(auto ch : t){
            mp[ch]++;
            if(mp[ch] == 1) count++;
        }

        int start = 0;
        int i = 0 , j = 0;
        int min_len = INT_MAX;

        while(j < n){
            if(mp.find(s[j]) != mp.end()) {
               mp[s[j]]--;
                if(mp[s[j]] == 0) count--; 
            }

            if(count == 0){
                while(count == 0){
                    if(mp.find(s[i]) != mp.end()) {
                        mp[s[i]]++;
                        if (mp[s[i]] == 1) count++;
                    }

                    if(j - i + 1 < min_len) {
                        min_len = j - i + 1;
                        start = i;
                    }
                    i++;
                }
            }
            j++;
        }

        if(min_len == INT_MAX) return "";
        return s.substr(start , min_len);
        
    }
};