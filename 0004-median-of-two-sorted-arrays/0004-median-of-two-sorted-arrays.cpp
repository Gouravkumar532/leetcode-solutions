class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0;
        int j =0;
        int curr = 0;
        int prev = 0;
        int n =nums1.size()+nums2.size();
        int hl = n/2;
        if(n%2 != 0){
 
            for(int m=0;m<=hl;m++){
               if (i < nums1.size() && (j >= nums2.size() || nums1[i] < nums2[j])){
                    curr = nums1[i];
                    i++;
                }else{
                    curr = nums2[j];
                    j++;
                }
            }
            return curr;
        }else{
            for(int m=0;m<=hl;m++){
                prev = curr;
               if (i < nums1.size() && (j >= nums2.size() || nums1[i] < nums2[j])){
                    curr = nums1[i];
                    i++;
                }else{
                    curr = nums2[j];
                    j++;
                }
            }
            return (prev+curr)/2.0;
        }

    }
};