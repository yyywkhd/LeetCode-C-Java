class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = lower_b(nums,target);
        int high = higher_b(nums,target);
        if(low == high){
            return {-1,-1};
        }else{
            return {low,high - 1};
        }
    }
int lower_b(vector<int>& nums, int target) {
        const int N = nums.size();
        // [l, r)
        int l = 0, r = N;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= target) {
                r = mid;
            } else  {
                l = mid + 1;
            }
        }
        return l;
    }
    int higher_b(vector<int>& nums, int target) {
        const int N = nums.size();
        // [l, r)
        int l = 0, r = N;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l;
    }
};