class Solution {
    public int removeElement(int[] nums, int val) {
        int left = 0;
        int right = nums.length;
        for(int j = 0; j < right; j++){
            if(nums[j] != val){
                nums[left] = nums[j];
                left++;
            }
        }
        return left;
    }
}