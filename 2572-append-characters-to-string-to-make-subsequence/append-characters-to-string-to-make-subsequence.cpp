class Solution {
public:
    int appendCharacters(string s, string t) {
        const int ns=s.size(), nt=t.size(); 
        int i=0, j=0;
        for(i=0; i<ns && j<nt; i++){
            if(s[i]==t[j]) j++;
        }
        return nt-j;
    
    }
};