class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==2 && nums[0]!=1) return false;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (i == nums.size() - 2) {
                return nums[i] == nums[i + 1];
            }

            if (nums[i] + 1 != nums[i + 1]) {
                return false;
            }
        }

        return false;
    }
};