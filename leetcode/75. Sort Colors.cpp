class Solution {
public:
    void sortColors(vector<int>& nums) {
        int max_index = nums.size() -1;
        int left = 0;
        for(int i = 0; i <= max_index; i++){
            if(nums[i] == 0){
                swap(nums[i],nums[left++]);
            }else if(nums[i] == 2){
                swap(nums[i--],nums[max_index--]);
            }
        }
    }
};