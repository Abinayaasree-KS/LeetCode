class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int n = s.length();
        int r=0, l=0, maxlen=0;
        while(r<n){
           if (map.find(s[r]) != map.end()) {
                l = max(l, map[s[r]] + 1); 
        }
        int len = r - l + 1;
            maxlen = max(maxlen, len);
            map[s[r]] = r;
            r++;}
            return maxlen;
    }

};