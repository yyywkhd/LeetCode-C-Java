class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        if(s.size()%2 != 0){
            return false;
        }
        stack <char> s2;
        for (int i = 0; i < s.size(); i++){
            if(s[i]=='('){
                s2.push(')');
            }else if (s[i]=='{'){
                s2.push('}');
            }else if (s[i] == '['){
                s2.push(']');
            }
            else if (s2.empty() || s2.top()!=s[i]){
                return false;
            }
            else{
                s2.pop();
            }
        }
        return s2.empty();
    }
};