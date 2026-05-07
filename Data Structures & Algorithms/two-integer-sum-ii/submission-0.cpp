class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // PART 2
        int left = 0;
        int right = numbers.size() - 1;

        // PART 3
        while (left < right) {

            // PART 4
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {}; // safety
    }
};