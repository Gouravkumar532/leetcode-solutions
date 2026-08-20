class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
        int h = arr1.size()+arr2.size();
        vector<int> ans(h);
        int t = 0;
        for(int i=0;i<h;i++){
            if(i<arr1.size()){
                ans[i] = arr1[i];
            }else{
                ans[i] = arr2[t];
                t++;
            }
        }
        return ans;
    }
};