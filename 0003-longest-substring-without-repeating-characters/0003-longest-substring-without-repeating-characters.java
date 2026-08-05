class Solution {
    public int lengthOfLongestSubstring(String s) {
        int[] last = new int[256];
        for(int i=0;i<256;i++){
            last[i] = -1;
        }

        int left = 0;
        int maxLen = 0;

        for(int right=0;right<s.length();right++){
            char ch  = s.charAt(right);

            if(last[ch] != -1){
                left = Math.max(left,last[ch]+1);
            }

            last[ch] = right;

            maxLen = Math.max(maxLen,right-left+1);
        }

        return maxLen;
    }
}