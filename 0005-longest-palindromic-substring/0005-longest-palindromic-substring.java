class Solution {
    public String longestPalindrome(String s) {
        if(s.length()==1) return s;
        int ansa = 0;
        int ansb = 0;
        for(int i=0;i<s.length();i++){
            int j=i;
            int k = i;
            while((j>=0)&&(k<s.length())&&(s.charAt(j)==s.charAt(k))){
                j = j-1;
                k = k+1;
            }
            j++;
            k--;
            if((k-j)>(ansb-ansa)){
                ansa = j;
                ansb = k;
            }

            j=i;
            k = i+1;
            while((j>=0)&&(k<s.length())&&(s.charAt(j)==s.charAt(k))){
                j = j-1;
                k = k+1;
            }
            j++;
            k--;
            if((k-j)>(ansb-ansa)){
                ansa = j;
                ansb = k;
            }
        }

        return s.substring(ansa,ansb+1);
    }
}