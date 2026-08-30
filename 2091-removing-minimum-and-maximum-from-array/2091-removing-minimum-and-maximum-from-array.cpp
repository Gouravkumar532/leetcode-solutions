class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minn= INT_MAX;
        int maxn = INT_MIN;
        int minid = 0;
        int maxid = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minn){
                minn = nums[i];
                minid = i;
            }
            if(nums[i]>maxn){
                maxn = nums[i];
                maxid = i;
            }
        }
        if(minid>maxid){
            swap(minid,maxid);
        }
        int o1 = maxid +1;
        int o2 = n-minid;
        int o3 = minid+1+n-maxid;
        return min({o1,o2,o3});
    }
};