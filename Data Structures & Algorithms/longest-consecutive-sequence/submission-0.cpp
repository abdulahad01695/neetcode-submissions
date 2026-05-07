class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Edge case: empty input
        if (nums.empty()) return 0;

        // PART 1: Hash set bana lo
        unordered_set<int> st;
        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        // PART 2: Traverse original array
        for (int num : nums) {

            // PART 3: Check if num is START of a sequence
            if (st.find(num - 1) == st.end()) {

                int currentNum = num;
                int currentLength = 1;

                // PART 4: Count consecutive numbers
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    currentLength++;
                }

                longest = max(longest, currentLength);
            }
        }

        return longest;
    }
};