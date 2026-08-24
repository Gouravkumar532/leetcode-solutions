class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int j = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                if(j!=0){
                    s[j++]=' ';
                }
                while(i<n && s[i]!=' '){
                    s[j++]=s[i++];
                }
            }
        }
        s.resize(j);
        reverse(s.begin(),s.end());
        int start = 0;
        for(int i=0;i<=s.size();i++){
            if(s[i]==' ' || i == s.size()){
            reverse(s.begin()+start,s.begin()+i);
            start = i+1;
            }
        }
        return s;
    }
};