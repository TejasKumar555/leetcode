class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {


       sort(arr.begin(),arr.end());
        

        int j=0,t=0;
        int temp=0,sum=0;

        int n=arr.size();

        sum=(n*(n+1))/2;

        for(int i=0;i<n;i++)
        temp=temp+arr[i];

        for(int i=1;i<=arr.size();i++)
        {
            if(arr[j]==arr[i])
            {
                break;

            }


            j++;




            
        }


        sum=sum-temp;

        return{arr[j],(sum+arr[j])};

        
    }
};