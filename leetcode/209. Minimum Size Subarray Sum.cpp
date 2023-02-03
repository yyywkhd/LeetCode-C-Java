class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int sublen_max = 1000000;
        int i = 0;
        int sublen = 0;
        int len = nums.size()-1;
        for(int j = 0; j <= len; j++){
            sum += nums[j];
            while(sum>=target){
                sublen = (j-i)+1;
                if (sublen < sublen_max){
                    sublen_max = sublen;
                }else{
                    sublen_max = sublen_max;
                }
                sum -= nums[i];
                i++;
            }
        }
        if(sublen_max == 1000000){
            sublen_max = 0;
        }
        return sublen_max;
    }
};