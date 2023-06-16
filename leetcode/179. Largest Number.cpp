class Solution {
public:
    string largestNumber(vector<int>& nums) {
        if(nums.size() == 0){
            return to_string(0);
        }
        sort(nums.begin(),nums.end(),[](int a,int b){
            return to_string(a)+to_string(b) > to_string(b)+to_string(a);
        });
        string result;
        for(int i = 0; i < nums.size(); i++){
            result += to_string(nums[i]);
        } 
        return result[0] =='0' ? "0" :result;
    }
};