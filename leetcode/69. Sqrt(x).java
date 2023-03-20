class Solution {
    public int mySqrt(int x) {
        long right = x / 2 + 1;
        long left=  0;
        while(left < right){
            long mid = left + ((right - left + 1) >>> 1);
            long square = mid * mid;
            if (square > x){
                right = mid - 1;
            }else{
                left = mid;
            }
        }
        return (int)left;
    }
}