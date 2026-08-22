class Solution {
public:
    bool checkDivisibility(int n) {
        int n1 = n;
        int sum = 0;
        int prod = 1;

        while(n > 0) {
            int d = n % 10;
            sum += d;
            prod *= d;
            n /= 10;
        }

        return n1 % (sum + prod) == 0;
    }
};