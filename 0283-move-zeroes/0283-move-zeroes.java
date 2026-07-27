class Solution {
    public void moveZeroes(int[] nums) {
        int l = 0; 
        int r =nums.length-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                int temp = nums[i];
                nums[i] = nums[l];
                nums[l] = temp;
                l++;
            }
        }
        System.out.println(nums);
    }
}