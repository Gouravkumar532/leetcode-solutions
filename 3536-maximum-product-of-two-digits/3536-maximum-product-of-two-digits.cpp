class Solution {
public:
    int maxProduct(int n) {
        int n1= n;
        int q = 0;
        int k = 0;
        while(n1>0){
            n1/=10;
            q++;
        }
        vector<int> arr(q);
        while(n>0){
            int s = n%10;
            arr[k] = s;
            k++; 
            n /=10;
        } 
        sort(arr.begin(),arr.end());
        int m = arr.size();
        return arr[m-1]*arr[m-2];
    }
};