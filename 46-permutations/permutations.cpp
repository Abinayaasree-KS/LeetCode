class Solution {
private:
    void find(int index, vector<int>& nums, vector<vector<int>>& res){
        if(index == nums.size()){
            res.push_back(nums);
            return;
        }
        unordered_set<int> used;
        for(int i =index; i<nums.size(); i++){
            if(used.count(nums[i])) continue;
            used.insert(nums[i]);
            swap(nums[index], nums[i]);
            find(index+1, nums, res);
            swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        find(0, nums, res);
        return res;
    }
};