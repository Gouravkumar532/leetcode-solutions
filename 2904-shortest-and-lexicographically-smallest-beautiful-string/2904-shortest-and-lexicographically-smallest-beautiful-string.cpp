class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int cnt = 0;
        for(int i =0 ;i<s.length();i++){
            if(s[i]=='1'){
                cnt++;
            }
            if(cnt == k){
                ans = s.substr(0,i+1);
                break;
            }
        }
        int l=0,r=0,count = 0;
        cout<<ans;
        while(r!=s.size()){
            if(s[r]=='0'){
                r++;
            }else{
                count++;
                if(count == k){
                    string n_ans = s.substr(l,r-l+1);
                    if (n_ans.size() < ans.size() ||
                        (n_ans.size() == ans.size() && n_ans < ans)) {
                        ans = n_ans;
                    }

                    l++;
                    r = l;
                    count = 0;
                }else{
                    r++;
                }
            }
        }
        return ans;
    }
};