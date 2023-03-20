class Solution {
    public int[] searchRange(int[] nums, int target) {
        int length = nums.length;
        if(length == 0){
            return new int[]{-1,-1};
        }
        int num1 = find_low_bound(nums,target);
        if(num1 == -1){
            return new int[]{-1,-1};
        }
        int num2 = find_up_bound(nums,target);
        return new int[]{num1,num2};
    }

    private int find_low_bound(int []nums, int target){
        int len = nums.length;
        int left = 0;
        int right = nums.length - 1;
        int length = nums.length;
        while(left < right){
            int mid = left + right >>> 1;
            if(nums[mid] < target){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        if(nums[left]!=target){
            return -1;
        }
        return left;
    }
    private int find_up_bound(int []nums, int target){
        int length = nums.length;
        int left = 0;
        int right = length - 1;
        while(left < right){
            int mid = (left+right+1) >>>1;
            if(nums[mid] > target){
                right = mid - 1;
            }else{
                left = mid;
            }
        }
        if(nums[left] != target){
            return -1;
        }
        return left;
    }
}