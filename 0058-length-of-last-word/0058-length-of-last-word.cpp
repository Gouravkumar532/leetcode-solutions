class Solution {
public:
    int lengthOfLastWord(string s) {
        int curr = 0;
        reverse(s.begin(),s.end());
        int i =0;
        while(s[i]==' '){
            i++;
        }
        for(;i<s.size();i++){
            if(s[i]!=' '){
                curr++;
            }else{
                break;
            }
        }
        return curr;
    }
};