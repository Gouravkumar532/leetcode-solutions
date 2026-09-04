class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            int max = *std::max_element(nums.begin(), nums.begin() + i);
            int min = *std::min_element(nums.begin()+i,nums.end());
            int ans = max-min;
            if(ans<=k){
                return i;
            }
        }
        return -1;
    }
};