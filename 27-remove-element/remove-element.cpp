class Solution {
public:
    int index = 0;
    int removeElement(vector<int>& nums, int val) {
        for(int i=0; i<nums.size(); i++){
            if(val != nums[i]){
            nums[index] = nums[i];
            index++;
            }
        }
        return index;
    }
};