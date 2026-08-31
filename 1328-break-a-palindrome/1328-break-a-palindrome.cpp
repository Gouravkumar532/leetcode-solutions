class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length() == 1)return "";
        int count = 0;
        int n = palindrome.length();
        for(int i=0;i<palindrome.length()/2;i++){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
       
        
        palindrome[n-1] = 'b';
        
        return palindrome;
    }
};