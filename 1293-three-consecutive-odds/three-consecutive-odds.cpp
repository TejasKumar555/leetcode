class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {


        int cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]&1==1)
            {
                cnt++;
                if(cnt==3)
                return 1;
                
            }
            else
            {
                cnt=0;
                continue;
            }
        }



        return 0;
        
    }
};