class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1){
            return 0;
        }else{
            sort(nums.begin(),nums.end());
            vector<int>::iterator it;
            it = unique(nums.begin(),nums.end());
            if(it!=nums.end()){
                nums.erase(it,nums.end());
            }
            for(int i = 0; i < nums.size(); i++){
                cout<<nums[i]<<endl;
            }
            int step = 1;
            int max_seq = 1;
            int ref = 1;
            for(int i = 0; i < nums.size() -1; i++){
                if(nums[i+1]-nums[i] == step){
                    if(ref == max_seq){
                        ref++;
                    }
                    max_seq++;
                }else{
                    max_seq = 1;
                }
            }
            return max(ref,max_seq);
        }
    }
};