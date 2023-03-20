class Solution {
    public int[] sortedSquares(int[] nums) {
        int right = nums.length;
        for(int i = 0; i < right; i++){
            nums[i] = nums[i]*nums[i];
        }
        Arrays.sort(nums);
        return nums;
    }
}