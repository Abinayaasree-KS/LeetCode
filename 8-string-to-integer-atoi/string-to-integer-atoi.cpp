class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int res = 0;
        int sign = 1;
        int i = 0;
        int digit;
        while(i<n && s[i] == ' ') i++;
        if(s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(s[i] == '+'){
            // sign = 1;
            i++;
        }
        while(i<n && s[i]>= '0' && s[i]<='9'){
            digit = s[i]-'0';
            if(res > (INT_MAX - digit)/10){
                return sign == 1 ? INT_MAX : INT_MIN;
            }
                res = res * 10 + digit;
                i++;
        }
        return res*sign;
    }
};