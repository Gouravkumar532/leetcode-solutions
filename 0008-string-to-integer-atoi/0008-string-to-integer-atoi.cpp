class Solution {
public:
    int myAtoi(string s) {
        long long ans  =0 ;
        int b =1;
        int i = 0;
        int n = s.size();
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && s[i]=='-'){
            b = -1;
            i++;
        }
        else if(i<n && s[i]=='+'){
            b=1;
            i++;
        }

        while(i<n && isdigit(s[i])){
            int d = s[i] - '0';
            
            ans = ans*10 +d;

            if (b == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if (b == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return b*ans;
    }
};