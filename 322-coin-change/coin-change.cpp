// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//       if(amount < 1) return 0;
//       vector<int> minCoinDP(amount + 1, INT_MAX);
//         minCoinDP[0] = 0; // base case

//         for (int i = 1; i <= amount; i++) {
//             for (int coin : coins) {
//                 if (coin <= i && minCoinDP[i - coin] != INT_MAX) {
//                     minCoinDP[i] = min(minCoinDP[i], 1 + minCoinDP[i - coin]);
//                 }
//             }
//         }

//         return minCoinDP[amount] == INT_MAX ? -1 : minCoinDP[amount];  
//     }
// };

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
      if(amount < 1) return 0;
      vector<int> dp(amount + 1, INT_MAX);
      dp[0] = 0;
      for(int i =1; i<=amount; i++){
        for(int coin : coins){
            if(coin <= i && dp[i-coin] != INT_MAX){
                dp[i] = min(dp[i], 1+dp[i-coin]);
            }
        }
      } 
      return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};