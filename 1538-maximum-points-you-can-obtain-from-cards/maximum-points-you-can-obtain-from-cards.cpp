class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {


        int n=cardPoints.size();
        int i=0,j=0;
        int sum=0;
        int maxi=INT_MIN;
        int lsum=0,rsum=0;
        int ri=n-1;


     for(int i=0;i<k;i++)
     lsum=lsum+cardPoints[i];

     sum=lsum;

     for(i=k-1;i>=0;i--)
     {
        lsum=lsum-cardPoints[i];
        rsum=rsum+cardPoints[ri];
        ri--;
        sum=max(sum,lsum+rsum);
     }


     return sum;
    }
};