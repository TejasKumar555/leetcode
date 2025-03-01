class Solution {
public:
    int numberOfSubstrings(string s) {
        int hash[3]={-1,-1,-1};
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            hash[s[i]-'a']=i;
            cnt=cnt+(1+min(hash[0],min(hash[1],hash[2])));
        }

        return cnt;
        
    }
};