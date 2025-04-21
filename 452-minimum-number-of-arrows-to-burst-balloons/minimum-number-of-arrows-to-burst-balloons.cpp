class Solution {
public:
    static bool cmp(vector<int>&t1,vector<int>&t2)
    {
        return t1[1]<t2[1];
    }
    int findMinArrowShots(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);

        int prev = 0;
        int count = 1;

        for(int i = 1; i < n; i++){
            if(intervals[i][0] >intervals[prev][1]){
                prev = i;
                count++;
            }
        }
        return count;
        
    }
};