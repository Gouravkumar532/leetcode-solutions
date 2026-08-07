class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        Map<Integer,Integer> mp = new HashMap<>();
        for(int num : nums){
            mp.put(num,mp.getOrDefault(num,0)+1);
        }
        int hl = n/2;
        for(Map.Entry<Integer, Integer> entry : mp.entrySet()){
            if(entry.getValue()>hl){
                return entry.getKey();
            }
        }
        return 0;
    }
}