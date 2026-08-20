class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int max1  = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == 1){
                curr++;
            }else{
                curr = 0;
            }
            max1 = max(max1,curr);
        }
        return max1;
    }
};