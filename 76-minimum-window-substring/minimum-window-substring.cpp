class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>hash(256,0);
        int l=0,r=0,si=-1,minlen=INT_MAX;
        int cnt=0;
        for(int i=0;i<t.size();i++)hash[t[i]]++;
        while(r<s.size())
        {
            if(hash[s[r]]>0)
            cnt=cnt+1;
            hash[s[r]]--;

            while(cnt==t.size())
            {
                if(r-l+1<minlen)
                {
                    minlen=r-l+1;
                    si=l;
                }

                hash[s[l]]++;
                if(hash[s[l]]>0)cnt=cnt-1;

                l++;
                
            }
            r++;
        }



        return si==-1?"":s.substr(si,minlen);
        
    }
};