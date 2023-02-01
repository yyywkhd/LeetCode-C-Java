class Solution {
public:
    int reverse(int x) {
        if(x > INT_MAX|| x < INT_MIN){
            return 0;
        }else{
            long r = 0;
            while (x){
                r = r*10 + x %10;
                x = x/10;
            }
            return r;
        }
    }
};