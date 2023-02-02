class Solution {
public:
    int myAtoi(string s) {
        int length = s.size();
        int space = ' ';
        vector <char> v1;
        for (int i = 0; i < length; i++){
            if(s[i] != space){
                v1.push_back(s[i]);
            }
        }
        vector <char> v2;
        for(int j = 0; j < v1.size(); j++){
            if(v1[0] >= '0' && v1[0] <= '9' || v1[0] =='-' ||v1[0] == '+'||v1[0] == '.'){
                v2.push_back(v1[j]);
            }else{
                return 0;
            }
        }
        v1.clear();
  
        for(int i = 0; i < v2.size(); i++){
            if(v2[i] >= '0' && v2[i] <= '9' || v2[i] == '-' || v2[i] == '+'||v2[i] == '.'){
                
                v1.push_back(v2[i]);
            }
        }
        int mul = 1;
        int result = 0;
        int tr = 0;
        int negative = 1;
        
        if(v1[0] == '-'){
            negative *= -1;
            for ( int i = v1.size()-1; i > 0; i--){
                tr = v1[i] - 48;
                if(result <= INT_MAX || result >= INT_MIN){
                    result += tr*mul*negative;
                    if(mul<=100000000){
                        mul *= 10;
                    }else{
                        mul = 0;
                    }
                }
            }
        }else{
            for ( int i = v1.size()-1; i >= 0; i--){
                tr = v1[i] - 48;
                if(result <= INT_MAX || result >= INT_MIN){
                    result += tr*mul*negative;
                    if(mul<=100000000){
                        mul *= 10;
                    }else{
                        mul = 0;
                    }
                }
            }
        }
        
        return result;
    }
};