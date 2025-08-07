class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum = 0 ;
        vector<vector<int>>ans;
        set<vector<int>>st;
        int i = 0 ;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            int l = i + 1;
            int r = nums.size()-1;
            
            while(l<r){
            sum = nums[i]+nums[l]+nums[r];
            if(sum==0){
                
                st.insert({nums[i],nums[l],nums[r]});
                // l++;
                // r--;
            }
            if(sum<0){
                l++;
            }
            else 
                r--;
            }
            i++;
        }
        for (auto it : st){
            ans.push_back(it);
        }
        return ans ;
    }
};