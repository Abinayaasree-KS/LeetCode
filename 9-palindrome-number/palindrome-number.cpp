class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long num =0;
        if(x<0){
        return false;}
        while(x){
            num = num * 10;
            num += x%10;
            x=x/10;
        }
        if(num == n){
        return true;
        }
        else 
        return false;
    }
};