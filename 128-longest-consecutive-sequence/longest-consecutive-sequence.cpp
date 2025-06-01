class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (nums.empty()) return 0;
        int count = 1;
        int longest = 1;
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }           
            if(nums[i] == nums[i-1] + 1){
                count++;
            }
            else{
                longest = max(count, longest);
                count = 1;}
        }
        return max(count,longest);
    }
};