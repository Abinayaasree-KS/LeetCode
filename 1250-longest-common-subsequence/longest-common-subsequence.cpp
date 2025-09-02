class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
       int n = s1.size();
    int m = s2.size();
    int cnt = 0;
    vector<vector<int>> dp(n+1, vector<int>(m+1,0));
    
    if(n==0){
        // cout<<m;
        return m;
    }
    else if(m==0){
        // cout<<n;
        return n;
    }
    
    for(int i=1; i<=n; i++){
        for(int j =1; j<=m; j++){
        if(s1[i-1] == s2[j-1]){
            dp[i][j] = 1 + dp[i-1][j-1];
        }
        else{
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
        }
        
    }
    
    return dp[n][m];
    }
};