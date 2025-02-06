class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = *max_element(candies.begin(), candies.end());
        int n = candies.size();
        vector<bool> result;
        for(int i=0; i<n; i++){
            result.push_back(candies[i] + extraCandies >= greatest);
        }
        return result;
    }
};