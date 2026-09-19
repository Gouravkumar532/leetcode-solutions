class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());

        while(l<r){
            int mid = l+(r-l)/2;
            long long hour = 0;
            for(int pile : piles){
                hour += (pile+mid-1)/mid;
            }
            if(hour<=h){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};