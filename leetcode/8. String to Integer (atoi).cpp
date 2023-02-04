class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int len = s.length();
        int flag = 1;
        int ret = 0;
        if(len == 0){
            return 0;
        }
        while(s[i] == ' ' &&i<len){
            ++i;
        }
        if(s[i]=='-'){
            flag = -1;
            ++i;
        }
        else if(s[i] == '+'){
            ++i;
        }
        while(s[i] == '0' && i <len){
            ++i;
        }
        while(s[i]>='0' &&s[i] <= '9' && i< len){
            int temp = s[i] - '0';
            cout<<temp<<endl;
            if((ret>INT_MAX/10 || (ret == INT_MAX/10 && temp >= 7))&&flag ==1){
                return INT_MAX;
            }
            if((ret>INT_MAX/10||(ret==INT_MAX/10&&temp>=8))&&flag==-1){
                return INT_MIN;
            }
            ret=ret*10+temp;
            ++i;    
        }
        return ret*flag;
    }
};


