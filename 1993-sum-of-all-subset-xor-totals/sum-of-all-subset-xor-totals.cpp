class Solution {
public:
    int subsetXORSum(vector<int>& nums) {



        
        int sum,ans=0;
        int sub=1<<nums.size();
      
        for(int i=0;i<sub;i++)
        {
          
            sum=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                sum=sum^nums[j];
            
                
            }

            ans=ans+sum;
        }



        return ans;



        
    }
};