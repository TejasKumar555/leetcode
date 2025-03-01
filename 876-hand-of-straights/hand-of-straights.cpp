class Solution {
public:
    bool isNStraightHand(vector<int>&hand, int groupSize) {
         if (hand.size() % groupSize != 0) return false;
    
    map<int, int> freq;
    for (int num : hand) {
        freq[num]++;
    }
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (const auto& [num, count] : freq) {
        minHeap.push(num);
    }
    
    while (!minHeap.empty()) {
        int first = minHeap.top();
        
        for (int i = 0; i < groupSize; i++) {
            int current = first + i;
            if (freq[current] == 0) return false;
            
            freq[current]--;
            if (freq[current] == 0) {
                if (minHeap.top() != current) return false;
                minHeap.pop();
            }
        }
    }
    
    return true;
}
        
    
};