class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int l=1 ,h=x, ans=0;
        while(l<=h){
            long long mid = l + (h - l)/2;
            long long res = mid * mid;
            if(res == x){
                return mid;
            }
            else if(res<x){
                ans=mid;
                l=mid+1;
            }
            else{
                // ans=mid;
                h=mid-1;
            }
        }
        return ans;
    }
};