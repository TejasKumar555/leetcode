class Solution {
public:
    int numberOfSubstrings(string s) {


       int hash[3]={-1,-1,-1};
       int cnt=0;

       for(int i=0;i<s.length();i++)
       {
        hash[s[i]-'a']=i;
        if(hash[0]!=-1&&hash[1]!=-1&&hash[2]!=-2)
        {
            int min1=min(hash[0],hash[1]);
                   cnt=cnt+(1+min(min1,hash[2]));
        }
     
       }

       return cnt;
    }
};