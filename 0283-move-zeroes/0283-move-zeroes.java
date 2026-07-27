class Solution {
    public void moveZeroes(int[] nums) {
        int index = 0;

        // Move all non-zero elements forward
        for (int num : nums) {
            if (num != 0) {
                nums[index++] = num;
            }
        }

        // Fill the rest with zeros
        while (index < nums.length) {
            nums[index++] = 0;
        }
    }
}