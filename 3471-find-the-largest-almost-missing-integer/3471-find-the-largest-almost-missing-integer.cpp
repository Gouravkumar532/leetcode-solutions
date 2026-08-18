class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k==nums.size()){ return *max_element(nums.begin(),nums.end());}
        if(k==1){
            map<int,int> mp;
            for(int x: nums){
                mp[x]++;
            }
            int ans = -1;
            for(auto &[x,freq]:mp){
                if(freq == 1){
                    ans = max(ans,x);
                }
            }
            return ans;
        }

        if(nums[0] == nums[nums.size()-1])
            return -1;

        int a = nums[0];
        int b = nums[nums.size()-1];
        bool aa = true;
        bool bb = true;
        for(int i = 1; i<nums.size()-1;i++){
            if(a==nums[i]){
                aa = false;
            }
            if(b==nums[i]){
                bb = false;
            }
        }

        int ans  = -1;
        if(aa) {
            ans = max(nums[0],a);
            
        }
        if(bb){
            ans = max(ans,b);
        }
        return ans;
    }
};