class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {


        vector<int>pos;
        vector<int>neg;
        vector<int>res;



        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            neg.push_back(nums[i]);
            else
            pos.push_back(nums[i]);


        }


        int i=0,j=0;
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            res.push_back(pos[i/2]);
            else
            {
                res.push_back(neg[j]);
                j++;
            }


        }

        return res;


        
    }
};