class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {


        vector<vector<int>> ans;
        vector<int>list;


        int sub=pow(2,nums.size());

        for (int i=0;i<sub;i++)
        {
            list.clear();
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                list.push_back(nums[j]);
            }

            ans.push_back(list);
        }
        return ans;

        
    }
};