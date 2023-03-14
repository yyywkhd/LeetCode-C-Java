class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT32_MIN;
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            count = 0;
            for( int j = i; j < nums.size(); j++){
                count+=nums[j];
                result = count>result? count : result;
            }
        }
        return result;
    }
};