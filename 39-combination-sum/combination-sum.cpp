class Solution {
private:
    void backtract(int start, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result){
        if(target == 0){
            result.push_back(current);
            return;
        }
        if(target < 0) return;
        for(int i= start; i<candidates.size(); i++){
            current.push_back(candidates[i]);
            backtract(i, target-candidates[i], candidates, current, result);
            current.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        backtract(0, target, candidates, current, result);
        return result;
    }
};