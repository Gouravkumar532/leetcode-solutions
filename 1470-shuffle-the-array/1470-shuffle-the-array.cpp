class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        vector<int> pt;
        vector<int> at;
        for(int i=0;i<n;i++){
            at.push_back(nums[i]);
        }
        for(int i=n;i<2*n;i++){
            pt.push_back(nums[i]);
        }
        int k = 0;
        int m = 0;
        for(int i=0;i<2*n;i++){
            if(i%2 == 0){
                ans.push_back(at[m]);
                m++;
            }
            else{
                ans.push_back(pt[k]);
                k++;
            }
        }
        return ans;
    }
};