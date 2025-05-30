class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int set = n/3;
        int count = 1;
        sort(nums.begin(), nums.end());
        for(int i =1; i <n; i++){
            if(nums[i] == nums[i-1]){
                count++;}
            else{
            if(count > set)
                    ans.push_back(nums[i-1]);
            count = 1;
            }
        }
        if(count>set)
                ans.push_back(nums[n-1]);
        return ans;
    }
};