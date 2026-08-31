class Solution {
public:

    int gcd(int a,int b){
        while(b){
            int t=a%b;
            a=b;
            b=t;
        }
        return a;
    }

    int lcm(int a,int b){
        return a/gcd(a,b)*b;
    }
    int subarrayLCM(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            int ans = 1;
            for(int j = i;j<nums.size();j++){
                ans = lcm(ans,nums[j]);
                if(ans>k) break;
                if(ans == k) sum++;
            }
            
        }
        return sum;
    }
};