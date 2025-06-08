class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int currentmax = 0;
        int max =0;
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                currentmax++;
                if(currentmax > max){
                    max = currentmax;
                }
            }
            else{
                currentmax = 0;
            }
        }
        return max;
    }
};