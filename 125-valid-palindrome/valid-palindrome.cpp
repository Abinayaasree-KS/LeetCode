class Solution {
public:
    bool isPalindrome(string s) {
     string ans;
     for(char ch : s){
        if(isalnum(ch))
            ans += tolower(ch);
     }
     int n = ans.size();
     int right = n-1;
     int left = 0;
     while(left < right){
        if(ans[left] != ans[right])
        return false;
        left++;
        right--;
        
     }
     return true;  
    }
};