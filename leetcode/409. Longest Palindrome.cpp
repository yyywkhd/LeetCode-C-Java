class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> ct;
        for(char c : s){
            ++ct[c];
        }
        int res = 0;
        bool hasOne = false;
        for(auto s1 : ct){
            if(s1.second %2 == 0){
                res += s1.second;
            }else{
                res += s1.second - 1;
                hasOne = true;
            }
        }
        if(hasOne){
            res++;
        }
        return res;
    }
};