class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {


        int b1=0,b2=0;
        long long XORR=0;
        for(int i=0;i<nums.size();i++)
            XORR=XORR^nums[i];

        int right=(XORR&(XORR-1))^XORR;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&right)
            b1=b1^nums[i];
            else
            b2=b2^nums[i];
        }

        return {b1,b2};
        
    }
};