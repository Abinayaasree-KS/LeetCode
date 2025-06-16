class Solution {
public:
    string longestPalindrome(string s) {
        int st=0;
        int n = s.length();
        int max_length = 1;
        for(int i=0; i<n-1; i++){
            int left = i, right = i;
            while(left >=0 && right<n && s[left] == s[right]){
                if(right-left+1 > max_length){
                st =  left;
                max_length = right - left + 1;
                }
                left--;
                right++;
            }
        }

            for(int i=0; i<n-1; i++){
            int left = i, right = i+1;
            while(left >=0 && right<n && s[left] == s[right]){
                st =  left;
                max_length = right - left + 1;
            }
            left--;
            right++;
        }
        for(int i=0; i<n-1; i++){
            int left = i, right = i+1;
            while(left >=0 && right<n && s[left] == s[right]){
                if(right-left+1 > max_length){
                st =  left;
                max_length = right - left + 1;
                }
                left--;
                right++;
            }
        }
        return s.substr(st, max_length);
        
    }
};