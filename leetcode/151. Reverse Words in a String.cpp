class Solution {
public:
    void removeExtraSpace(string &s){
        int slow = 0, fast = 0;
        while(s.size()>0 && fast < s.size()&& s[fast] == ' '){
            fast++;
        }
        for(;fast<s.size();fast++){
            if(fast-1>0 && s[fast-1]==s[fast]&&s[fast]==' '){
                continue;
            } else {
            s[slow++]=s[fast];
            }
        }
        if(slow-1>0 && s[slow-1]==' '){
            s.resize(slow-1);
        }else{
            s.resize(slow);
        }
    }
    void reverse(string&s,int start,int end){
        for(int i = start, j = end; i < j; i++,j--){
            swap(s[i],s[j]);
        }
    }
    string reverseWords(string s) {
        removeExtraSpace(s);
        reverse(s,0,s.size()-1);
        int start = 0;
        for (int i = 0; i <= s.size(); i++){
            if(i==s.size() || s[i] == ' '){
                reverse(s,start,i-1);
                start = i + 1;
            }
        }
        return s;
    }
};