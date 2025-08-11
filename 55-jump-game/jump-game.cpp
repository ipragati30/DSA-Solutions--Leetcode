class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(maxi < i){
                return false;
            }
            maxi = max(i+nums[i],maxi);
            
        }
        return true;
    }
};