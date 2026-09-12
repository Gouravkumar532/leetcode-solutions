class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int p1 = nums.size()-2;
        while(p1>=0 && nums[p1]>=nums[p1+1]){
            p1--;
        }
        if(p1>=0){
            int p2 = nums.size()-1;
            while(nums[p2]<=nums[p1]){
                p2--;
            }
            swap(nums[p1],nums[p2]);
        }
        sort(nums.begin()+p1+1,nums.end());
    }
};