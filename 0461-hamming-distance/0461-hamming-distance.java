class Solution {
    public int hammingDistance(int x, int y) {
        int m = x^y;
        return Integer.bitCount(m);
    }
}