class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double ans=INT_MIN,sum=0;
        int n=nums.size();
        while(j<n)
        {
            sum=sum+nums[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                ans=max(ans,(sum/(j-i+1)));
                sum -= nums[i];

                i++;
                j++;
            }

        }
        return ans;
    }
};