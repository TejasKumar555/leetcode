class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {


        int i=0,j=0;
        long long sum=0;
        long long ans=0;
        unordered_map<int,int>mp;

        while(j<nums.size())
        {
             mp[nums[j]]++;
            sum += nums[j];

            // If window size exceeds k, adjust window
           
            if(j-i+1<k)
            j++;
            else if (j - i + 1 == k) {
                if (mp.size() == k) { // If all elements are distinct
                    ans = std::max(ans, sum);
                }

                // Slide the window
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                sum -= nums[i];
                i++;
                j++;
            }

            // Move to the next element
            
        }

        return ans;
    }
};