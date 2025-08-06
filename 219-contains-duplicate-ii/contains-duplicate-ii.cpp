class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        
        for (int i =  0 ; i< nums.size() ; i++){
            int v = nums[i];
            if(mp.find(v)!=mp.end() and abs(i - mp[v]) <= k){
                return true;
            }
            mp[v]=i;

        }
        return false;
    }
};