class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s1 = s + s;
        s1.erase(s1.begin());
        s1.erase(s1.end()-1);
        if(s1.find(s)!=string::npos){
            return true;
        }return false;
    }
};