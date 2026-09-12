class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> neg,pos;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int k=0,q=0;
        for(int i =0;i<nums.size();i++){
            if(i%2==0){
                nums[i] = pos[k];
                k++;
            }else{
                nums[i] = neg[q];
                q++;
            }
        }
        return nums;
    }
};