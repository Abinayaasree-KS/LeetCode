class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int count = 1;
       int set = n/2;
       sort(nums.begin(), nums.end());
       for(int i =1; i<n; i++){
        if(nums[i] == nums[i-1] ){
            count++;
        if(count > set)
            return nums[i];}
        else 
            count = 1;
       }
      return nums[0]; 
    }
};