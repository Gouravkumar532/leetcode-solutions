class Solution {
    public int smallestNumber(int n, int t) {
        while(true){
            int n1  = n;
            int prod  = 1;
            while(n1>0){
                int s  = n1%10;
                prod = prod*s;
                n1 = n1/10;
            }
            if(prod % t  == 0){
                return n;
            }
            n++;
        }
    }

}