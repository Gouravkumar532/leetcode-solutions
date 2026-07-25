class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top =0;
        int left = 0;
        int bottom = n-1;
        int right  = n-1;
        int q = 1;
        vector<vector<int>> arr(n, vector<int>(n, 0));
        while(top<=bottom && left<=right){
            for(int j= left;j<=right;j++){
                arr[top][j] = q;
                q++;
            }
            top++;
            for(int j = top;j<=bottom;j++){
                arr[j][right] =q;
                q++;
            }
            right--;
            if(top<=bottom){
                for(int j=right;j>=left;j--){
                    arr[bottom][j] = q;
                    q++;
                }
                bottom--;
            }
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    arr[j][left] =q;
                    q++;
                }
                left++;
            }
        }
        return arr;

    }
};