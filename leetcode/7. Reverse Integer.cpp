class Solution {
public:
    int reverse(int x) {
        int max_value = pow(2,31)-1;
        int min_value = -pow(2,31);
        
        int n = 0;
        while(x!=0){
            if(n > 0 && n > (INT_MAX - x % 10) / 10) {
                return 0;
            }
            if(n < 0 && n < (INT_MIN - x % 10) / 10) {
                return 0;
            }
            n = n*10 + x%10;
            x = x/10;
        }

        return n;
    }
};