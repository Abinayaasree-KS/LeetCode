class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> res;
        for(int i=0; i<n; i++){
            int remainder = target - nums[i];
            if(res.find(remainder) != res.end())
                return {res[remainder], i};

            res[nums[i]] = i;
        }
        return {};
    }
};