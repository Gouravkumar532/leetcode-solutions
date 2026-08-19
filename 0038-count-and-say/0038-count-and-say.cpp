class Solution {
public:
    string countAndSay(int n) {
        string ans  = "1";
        for(int i=2;i<=n;i++){
            string next = "";
            for(int j=0;j<ans.size();){
                int count = 0;
                char ch = ans[j];
                while(j<ans.size() && ans[j]==ch){
                    count++;
                    j++;
                }
                next+=to_string(count);
                next+=ch;
            }
            ans=next;
        }
        return ans;
    }
};