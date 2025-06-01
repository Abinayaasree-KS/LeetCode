class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (nums.empty()) return 0;
        int longest = 0;
        unordered_set <int>s(nums.begin(), nums.end());
        for(int i:s){
            if(s.find(i-1) == s.end()){
                int current=i;
                int streak = 1;
                while(s.find(current+1) != s.end()){
                    current++;
                    streak++;
                }
                longest = max(longest,streak);
            }
        }
        return longest;
    }
};