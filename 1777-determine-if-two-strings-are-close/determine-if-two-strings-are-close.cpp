class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        if(n != m){
            return false;
        }
        unordered_set <char> chw1(word1.begin(),word1.end());
        unordered_set <char> chw2(word2.begin(),word2.end());
        if(chw1 != chw2) return false;
        vector<int> freq1(26,0), freq2(26,0);
            for(char c : word1) freq1[c - 'a']++;
            for(char c : word2) freq2[c - 'a']++;
            sort(freq1.begin(),freq1.end());
            sort(freq2.begin(),freq2.end());

            return freq1 == freq2;
    }
};