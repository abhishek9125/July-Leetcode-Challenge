class Solution {
public:
    int arrangeCoins(int n){
        long long left = 0;
        long long right = n;
        while(left<=right){
            long long mid = left + (right - left)/2;
            long long value = (mid*(mid+1))/2;
            if(value==n){
                return (int)mid;
            }
            if(n<value){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return (int)right;
    }
};
