class Solution {
public:
    int get_sum(int n){
        int sum = 0;
        while(n){
            sum+=(n%10)*(n%10);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while(1){
            int sum = get_sum(n);
            if(sum == 1){
                return true;
            }
            if(set.find(sum)!=set.end()){
                return false;
            }else{
                set.insert(sum);
            }
            n = sum;
        }
    }
};