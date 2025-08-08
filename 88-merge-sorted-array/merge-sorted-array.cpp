class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c = m ;
       for(int i = 0 ; i < nums2.size() ; i++){
           nums1[c++]=nums2[i];
       }
    sort(nums1.begin(),nums1.end());
    }
};
