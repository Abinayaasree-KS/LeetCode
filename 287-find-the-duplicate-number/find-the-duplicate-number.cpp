class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
    unordered_map<int, int> res;
    
    for(int i=0; i<n; i++){
        if(res.find(nums[i]) != res.end()){
            res[nums[i]]++;
        }
        if(res[nums[i]] > 1){
            return nums[i];
        }
        else{
            res[nums[i]] = 1;
        }
        
        }
        return 0;
    }
};