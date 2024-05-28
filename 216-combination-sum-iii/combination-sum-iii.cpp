class Solution {
public:
    void com(int ind, vector<int>& arr, vector<vector<int>>& ans, int target,int k, vector<int>& ds) {
        if (target == 0&&k==0) {
            ans.push_back(ds);
            return;
        }

        for (int i =ind; i < arr.size(); ++i) {
          
            if (arr[i] > target) break;
            if(k<0)break; 
            ds.push_back(arr[i]);
            com(i + 1, arr, ans, target - arr[i],k-1, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int> a={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> ds;
        com(0,a,ans,n,k,ds);
        return ans;
    }
};
