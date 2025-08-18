class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        // try to slide on both side
        return max(solve(nums1, nums2), solve(nums2, nums1));
    }
private:
    int solve(vector<int> &nums1, vector<int> &nums2) {
        int res = 0;
        for (int start = 0; start < size(nums2); ++start) {
            int acc = 0;
            for (int i = 0; i < size(nums1) && start + i < size(nums2); ++i) {
                if (nums1[i] == nums2[start + i]) acc++;
                else acc = 0;
                
                res = max(res, acc);
            }
        }
        return res;
    }
};