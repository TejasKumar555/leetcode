class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0;
        unordered_map<int,int> mp;


        int ans=0;

        int n=fruits.size();

       

        while(j<n)
        {
            mp[fruits[j]]++;
          

            if(mp.size()<2)
            {

            
            ans=max(ans,j-i+1);
            j++;
            }
            else if(mp.size()==2)
            {
                 ans=max(ans,j-i+1);
                j++;
            }
            else if(mp.size()>2)
            {
                while(mp.size()>2)
                {
                    mp[fruits[i]]--;
                    
                    if(mp[fruits[i]]==0)
                    mp.erase(fruits[i]);
                    i++;
                }

                j++;

            }

           
           




        }


        return ans;


        
    }
};