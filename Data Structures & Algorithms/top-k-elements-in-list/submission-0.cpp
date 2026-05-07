class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Frequency count (hash table)
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Buckets (index = frequency)
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);

        for (auto &p : freq) {
            int number = p.first;
            int count = p.second;
            bucket[count].push_back(number);
        }

        // Step 3: Collect top k from buckets (high freq → low)
        vector<int> result;
        for (int i = n; i >= 1 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result;
    }
};