class KthLargest {
private:
// Min heap is a DS that contains the root value lesser than the children values.
    priority_queue<int, vector<int>, greater<int>> pq;
    int K;
public:
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for(auto &ele : nums){
            pq.push(ele);
            if(pq.size() > K){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > K){
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */