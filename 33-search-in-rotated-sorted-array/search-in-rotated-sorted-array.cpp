class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int right = n - 1;
        int left = 0;
        //    sort(nums.begin(), nums.end());
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                }
                else
                    left = mid + 1;
            } else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                }
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
};