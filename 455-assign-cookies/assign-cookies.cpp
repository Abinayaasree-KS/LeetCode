class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       int n = g.size();
       int m = s.size();
       sort(g.begin(), g.end());
       sort(s.begin(), s.end());
       int cookie = 0;
       int child = 0;
       while(cookie < m && child < n){
        if(g[child] <= s[cookie]){
            child++;
        }
            cookie++;
       }
       return child;
    }
};