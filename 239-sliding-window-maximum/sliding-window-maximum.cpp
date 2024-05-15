class Solution {
public:
    vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        vector<int> ans;
    deque<int> dq;

        for (int i = 0; i < nums.size(); ++i) {
            // Remove elements outside of the window
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            // Remove elements smaller than the current element
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);

            // Add maximum element to the result for each window
            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};
