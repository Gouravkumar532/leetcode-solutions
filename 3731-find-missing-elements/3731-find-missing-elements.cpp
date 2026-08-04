class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        int mx  =nums[0];
        int mn = nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mx<nums[i]){
                mx = nums[i];
            }
            if(mn>nums[i]){
                mn = nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        int k = 0;
        for(int i= mn;i<=mx;i++){
            if (k < nums.size() && nums[k] == i) {
                k++;
            } else {
                ans.push_back(i);
            }  
            
            }
        
        return ans;

    }
};