class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        
        long long sum = 0 ;
        for(int i=0 ; i < nums.size()-3 ; i++){
           for (int j = i + 1 ; j < nums.size() -2 ; j++){
                int k = j+1;
                int l = nums.size()-1;
                while(k<l){
                    sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    if(sum==target){
                        st.insert({nums[i],nums[j],nums[k],nums[l]});
                    }
                    if(sum>target){
                        l--;
                    }
                    else {
                        k++;
                    }
                }
            }
        }
        for (auto it : st){
            ans.push_back(it);
        }
        
        return ans;
    }
};