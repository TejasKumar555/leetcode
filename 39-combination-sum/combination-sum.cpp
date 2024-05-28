class Solution {
public:

    void com(int ind,vector<int>&arr,vector<vector<int>>&ans,int target,vector<int> ds)
    {
        if(ind==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
                return;
            }
            else
            return;

        }




        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            com(ind,arr,ans,target-arr[ind],ds);
            ds.pop_back();
        }


        com(ind+1,arr,ans,target,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {


        vector<vector<int>>ans;
        vector<int>ds;
        com(0,candidates,ans,target,ds);
        return ans;
        
    }
};