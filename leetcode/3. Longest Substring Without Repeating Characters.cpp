class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()!=0){
            unordered_set <char> c1;
            int left = 0;
            int max_value = 0;
            for (int i = 0; i<s.size(); i++){
                while(c1.find(s[i])!=c1.end()){
                    c1.erase(s[left]);
                    left++;
                }
                max_value = max(i-left+1,max_value);
                c1.insert(s[i]);
            }
            return max_value;
        }else{
            return 0;
        }
    }
};