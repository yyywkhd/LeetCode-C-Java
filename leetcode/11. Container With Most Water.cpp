class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_height = 0;
        while(left < right){
            max_height = max(max_height,(right-left)*min(height[left],height[right]));
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return max_height;
    }
};