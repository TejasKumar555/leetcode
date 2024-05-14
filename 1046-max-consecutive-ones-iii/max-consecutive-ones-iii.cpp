class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {


        int i=0,j=0;
        int len=0;
        int nz=0;

        while(j<nums.size())
        {

            if(nums[j]==0)
            nz++;

            if(nz<=k)
            {
                len=max(len,j-i+1);
                j++;
            }
            else if(nz>k)
            {
                while(nz>k)
                {
                    if(nums[i]!=0)
                    i++;
                    else
                    {
                        nz--;
                        i++;
                    }
                }
                j++;
            }
        }


        return len;
        
    }
};