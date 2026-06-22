

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        // Step 1: Count frequencies
        for (int n : nums) {
            freq[n]++;
        }

        // Step 2: Use a max-heap (priority queue) to sort by frequency
        priority_queue<pair<int,int>> pq;
        for (auto &it : freq) {
            pq.push({it.second, it.first}); // (frequency, number)
        }

        // Step 3: Extract top k elements
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
