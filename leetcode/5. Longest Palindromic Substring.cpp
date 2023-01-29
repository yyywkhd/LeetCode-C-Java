class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()!=0){
            int start = 0, end = 0;
            for (int i = 0; i < s.size(); i++){
                int interval_1 = move(s,i,i);
                int interval_2 = move(s,i,i+1);
                int max_interval = max(interval_1,interval_2);
                if(max_interval > end - start){
                    start = i-(max_interval-1)/2;
                    end = i+max_interval/2;
                }
            }
            string str = "";
            for (int i = start; i <=end; i++){
                str += s[i];
            }
            return str;
        }else{
            return 0;
        }
    }

    int move(string s, int left, int right){
        while(left >= 0 && right < s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right - left - 1;
    }
};