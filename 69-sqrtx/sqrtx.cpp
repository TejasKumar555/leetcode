class Solution {
public:
    int mySqrt(int x) {


        if(x==0)
        return x;

       long long int low=1;
        long long int high=x;
        long long int ans=1;

        while(low<=high)
        {
            long long int mid=(low+high)/2;
            long long int val=mid*mid;

            if(val<=x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }

        }


        return ans;
    }
};