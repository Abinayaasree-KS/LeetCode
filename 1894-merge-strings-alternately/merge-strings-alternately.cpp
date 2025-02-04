class Solution {
public:
    string mergeAlternately(string word1, string word2) { 
        int n = word1.length();
        int m = word2.length();
        int max = 0;
        if(n > m){
            max = n;
        }
        else{
            max = m;
        }
        string res;
        for(int i=0; i<max; i++){
            if(i<n){
                res += word1[i];
            }
            if(i<m){
                res += word2[i];
            }
        }
        return res;
    }
};