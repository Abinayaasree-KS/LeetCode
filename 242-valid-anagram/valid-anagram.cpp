class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        int count[26] = {0};
        if(n != m) return false;
        for(int i=0; i<n; i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int i=0; i<26; i++){
            if(count[i] != 0) return false;
        }
        return true;
    }
};