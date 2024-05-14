class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {


        int i=0,j=0;
        int n=customers.size();
        int sum=0,res=0;
        int temp=0;

        for(int k=0;k<n;k++)
        {
            if(!grumpy[k])
            {
                sum=sum+customers[k];
                customers[k]=0;
            }

        }


        while(j<n)
        {
            if(grumpy[j])
            temp=temp+customers[j];
            if((j-i+1)<minutes)
            j++;
            else if((j-i+1)==minutes)
            {
                res=max(res,sum+temp);
                if(grumpy[i])
                temp=temp-customers[i];

                i++;
                j++;

            }
        }

        return res;
    }
};