class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<long> length(6);
        length[0] = pow(pow((p2[1]-p1[1]),2) + pow((p2[0]-p1[0]),2),2);
        length[1] = pow(pow((p3[1]-p1[1]),2) + pow((p3[0]-p1[0]),2),2);
        length[2] = pow(pow((p4[1]-p1[1]),2) + pow((p4[0]-p1[0]),2),2);
        length[3] = pow(pow((p3[1]-p2[1]),2) + pow((p3[0]-p2[0]),2),2); 
        length[4] = pow(pow((p4[1]-p2[1]),2) + pow((p4[0]-p2[0]),2),2);
        length[5] = pow(pow((p4[1]-p3[1]),2) + pow((p4[0]-p3[0]),2),2);
        sort(length.begin(),length.end());
        if((length[0] == length[1] &&
            length[1] == length[2] &&
            length[2] == length[3]) && (length[4] == length[5]) && (length[3]!=length[4])){
            return true;
        }
        return false;
    }
};