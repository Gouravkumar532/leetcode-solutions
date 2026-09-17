class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans = 0;
        for(int num:s){
            if(s.contains(num-1)){
                continue;
            }

            int val = num;
            int cur = 1;
            while(s.contains(val+1)){
                cur++;
                val++;
            }
            ans = max(ans,cur);
        }
        return ans;
    }
};