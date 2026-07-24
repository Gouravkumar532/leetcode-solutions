class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> arr;
        int top = 0;
        int left = 0;
        int bottom = m-1;
        int right = n-1;
        while(top<=bottom && left<=right){
            for(int j= left;j<=right;j++){
                arr.push_back(matrix[top][j]);
            }
            top++;
            for(int j = top;j<=bottom;j++){
                arr.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
                for(int j=right;j>=left;j--){
                    arr.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    arr.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return arr;
    }
};