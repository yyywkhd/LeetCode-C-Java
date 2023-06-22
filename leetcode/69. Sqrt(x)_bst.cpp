class Solution {
public:
    int mySqrt(int x) {
       int min = 1;
       int max = x;
       while(min<=max){
           int mid = min + ((max-min)>>1);
           if(mid*mid == x){
               return mid;
           }else if(mid<x/mid){
               min = mid + 1;
           }else{
               max = mid - 1;
           }
       }
       return min > x / min ? min - 1:min;
    }
};