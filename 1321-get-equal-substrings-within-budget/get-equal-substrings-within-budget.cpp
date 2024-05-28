class Solution {
public:
    int equalSubstring(string s, string t, int maxcost) {




        int i=0;
        int j=0;
        int cost=0;
        int len=0;



        while(j<s.length())
        {

            cost=cost+abs(s[j]-t[j]);
            if(cost<=maxcost)
            {
                len=max(len,j-i+1);
               
               
                
            }
            else if(cost>maxcost)
            {
                while(cost>maxcost)
                {
                    cost=cost-abs(s[i]-t[i]);
                    i++;
                }


             
               
                
            }


            j++;


           
            
        }


        return len;
        
    }
};