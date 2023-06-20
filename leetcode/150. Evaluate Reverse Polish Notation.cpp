class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;
        for(string token:tokens){
            if(token!="+"&&token!="-"&&token!="*"&&token!="/"){
                result.push(stoi(token));
                continue;
            }

            int rhv = result.top();
            result.pop();
            int lhv = result.top();
            result.pop();

            if(token == "+"){
                result.push(rhv+lhv);
            }
            else if(token == "-")
            {
                result.push(lhv-rhv);
            }
            else if(token == "*")
            {
                result.push(lhv*rhv);
            }
            else if(token == "/")
            {
                result.push(lhv/rhv);
            }
        }
        return result.top();
    }
};