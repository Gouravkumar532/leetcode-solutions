class Solution {
    public String smallestPalindrome(String s) {
        if (s.length() == 1) return s;
        String h = s.substring(0, s.length() / 2);
        int freq[] = new int[26];
        for(char c:h.toCharArray()){
            freq[c-'a']++;
        }
        StringBuilder ans = new StringBuilder();
        for(int i=0;i<26;i++){
            while(freq[i]>0){
                ans.append((char)('a'+i));
                freq[i]--;
            }
        }
        String rev = new StringBuilder(ans).reverse().toString();
        if(s.length()%2 == 1){
            ans.append(s.charAt(s.length()/2));
            ans.append(rev);
            return ans.toString();
        }
        ans.append(rev);
        return ans.toString();

    }
}