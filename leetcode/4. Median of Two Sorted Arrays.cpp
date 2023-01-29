class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> all_nums;
        for(auto i:nums1){
            all_nums.push_back(i);
        }
        for(auto j:nums2){
            all_nums.push_back(j);
        }
        sort(all_nums.begin(),all_nums.end());
        int length = all_nums.size();
        if(length%2==0){
            return (all_nums[length/2]+all_nums[length/2-1])/2.0;
        }else{
            return all_nums[length/2];
        }
    }
};