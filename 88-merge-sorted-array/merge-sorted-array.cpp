class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;

        for (int i = 0; i < m; i++) {
            // if (nums1[i] != 0) {     // ignore 0
                res.push_back(nums1[i]);
            // }
        }

        for (int j = 0; j < n; j++) {
            // if (nums2[j] != 0) {     // ignore 0
                res.push_back(nums2[j]);
            // }
        }

        sort(res.begin(), res.end());

        for (int k = 0; k < res.size(); k++) {
            nums1[k] = res[k];
        }
    }
};
