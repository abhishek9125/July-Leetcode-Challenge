class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly;
        int f2 = 0;
        int f3 = 0;
        int f5 = 0;
        ugly.push_back(1);
        for(int i=1;i<n;i++){
            int x = min(ugly[f2]*2,min(ugly[f3]*3,ugly[f5]*5));
            ugly.push_back(x);
            if(x==ugly[f2]*2){
                f2++;
            }
            if(x==ugly[f3]*3){
                f3++;
            }
            if(x==ugly[f5]*5){
                f5++;
            }
        }
        return ugly[n-1];
    }
};
