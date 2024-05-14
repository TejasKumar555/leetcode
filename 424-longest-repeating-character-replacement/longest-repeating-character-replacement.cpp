class Solution {
public:
    int characterReplacement(string s, int k) {

    int i=0,j=0,maxf=0,maxlen=0;
    unordered_map<char,int>mp;

    while(j<s.length())
    {
        mp[s[j]]++;
        maxf=max(maxf,mp[s[j]]);
        if((j-i+1)-maxf<=k)
        {
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        else if((j-i+1)-maxf>k)
        {
            while((j-i+1)-maxf>k)
            {
                mp[s[i]]--;
                  for (const auto& pair : mp) {
       maxf=max(maxf,pair.second);
    }

                i++;

            }
            j++;

        }

     
    }
       return maxlen;

        
    }
};