class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>min_H;
        for(int i=0;i<nums.size();i++)
        {
            min_H.push(nums[i]);
            if(min_H.size()>k)
            min_H.pop();


        }

        return min_H.top();
        
    }
};