class Solution {
public:
    int reverseDegree(string s) {
        int ans =0;
        for(int i = 0;i<s.length();i++){
            int val = 'z'-s[i]+1;
            int idx = i+1;
            int prod = val*idx;
            ans += prod;
        }
        return ans;
    }
};