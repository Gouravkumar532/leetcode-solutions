/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int l = 0;
        int r = mountainArr.length()-1;
        int peak;
        while(l<r){
            int m = l+(r-l)/2;
            int midv = mountainArr.get(m);
            int nextv = mountainArr.get(m+1);
            if(midv<nextv){
                l = m+1;
            }
            else {
                r = m;
            }
        }
        peak = l;
        int lleft = 0;
        int lright = peak;
        while(lleft<=lright){
            int lmid = lleft+(lright-lleft)/2;
            int midv = mountainArr.get(lmid);
            if(midv==target){
                return lmid;
            }else if(midv<target){
                lleft = lmid+1;
            }else{
                lright = lmid-1;
            }
        }

        int rleft = peak+1;
        int rright = mountainArr.length()-1;
        while(rleft<=rright){
            int rmid = rleft+(rright-rleft)/2;
            int midv = mountainArr.get(rmid);
            if(midv==target){
                return rmid;
            }else if(midv>target){
                rleft = rmid+1;
            }else{
                rright = rmid-1;
            }
        }

        return -1;


    }
};