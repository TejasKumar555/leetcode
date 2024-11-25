class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int farthest = nums[0], prev = 0;
        int ans = 1;
        while(farthest < nums.size()-1){
            int maxJumpInRange = -1;
            for(int i=prev+1; i<=farthest; i++){
                if(nums[i]+i > maxJumpInRange){
                    maxJumpInRange = nums[i]+i;
                }
            }
            prev = farthest;
            farthest = maxJumpInRange;
            ans++;
        }
        return ans;
    }
    
};