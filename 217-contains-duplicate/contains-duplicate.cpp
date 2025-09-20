class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int , int> freq;
        for(auto num : nums){
            freq[num]++;
        }
        for(auto f:freq){
            if(f.second > 1){
                return true;
            }
        }
        return false;
    }
};