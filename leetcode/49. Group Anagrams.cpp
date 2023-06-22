class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s1;
        unordered_map<string,vector<string>> s2;
        for(auto str : strs){
            string s3 = str;
            sort(s3.begin(),s3.end());
            s2[s3].push_back(str);
        }
        for(auto s4: s2){
            s1.push_back(s4.second);
        }
        return s1;
    }
};