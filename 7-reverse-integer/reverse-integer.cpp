class Solution {
public:
    int reverse(int x) {
        int sum =0;
        int sign = (x<0)?-1:1;
        while(x!=0){
            int n = x%10;
         if(sum<INT_MIN/10 || sum>INT_MAX/10){return 0;}
            sum = sum*10+n;
            x = x/10;
            }
        return sum;
    }
};