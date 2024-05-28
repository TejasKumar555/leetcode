class Solution {
public:
    void com(int ind, vector<int>& arr, vector<vector<int>>& ans, int target, vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); ++i) {
            if (i > ind && arr[i] == arr[i - 1]) continue; // skip duplicates
            if (arr[i] > target) break; // no need to continue if the current number exceeds the target

            ds.push_back(arr[i]);
            com(i + 1, arr, ans, target - arr[i], ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        com(0, candidates, ans, target, ds);
        return ans;
    }
};
