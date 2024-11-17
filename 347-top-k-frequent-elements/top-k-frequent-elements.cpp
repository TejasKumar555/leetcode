class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_H;
        unordered_map<int,int>mpp;


        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            

        }


        for(auto it:mpp)
        {
            min_H.push({it.second,it.first});
            if(min_H.size()>k)
            min_H.pop();
        }


        vector<int>res;

        while(min_H.size())
        {
                  res.push_back(min_H.top().second);
                  min_H.pop();
        }


        return res;


        
    }
};