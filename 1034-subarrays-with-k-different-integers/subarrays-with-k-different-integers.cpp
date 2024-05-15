class Solution {
public:
    int subarrays(vector<int>& nums, int k) {


        int l=0,r=0,ct=0;
        unordered_map<int,int>mp;

        while(r<nums.size())
        {
            mp[nums[r]]++;

            while(mp.size()>k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                {
                    mp.erase(nums[l]);
                }

                l++;


            }
            if(mp.size()<=k)
            ct=ct+(r-l+1);

            r++;

        }


        return ct;
        
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {


        return (subarrays(nums,k)-subarrays(nums,k-1));
    }
};