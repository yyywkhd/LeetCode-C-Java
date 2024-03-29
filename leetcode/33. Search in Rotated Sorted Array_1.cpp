class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0){
            return -1;
        }
        int l = 0;
        int r = nums.size() - 1;
        while(l<=r){
            int mid = l+((r-l)>>1);
            if(nums[mid] == target){
                return mid;
            }else if(target < nums[mid]){
                if(target >= nums[l]){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }else if (target > nums[mid]){
                if(target <= nums[r]){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};