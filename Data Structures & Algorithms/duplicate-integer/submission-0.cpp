class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        for(int i=0; i < (int)nums.size(); i++){
            for(int j=i + 1; j < (int)nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};