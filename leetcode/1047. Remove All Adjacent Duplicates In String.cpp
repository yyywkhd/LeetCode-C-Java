class Solution {
public:
    string removeDuplicates(string qq) {
        string ns;
        for(char s1:qq){
            if(ns.empty() || ns.back() != s1){
                ns.push_back(s1);
            }else{
                ns.pop_back();
            }

        }
        return ns;
    }
};

