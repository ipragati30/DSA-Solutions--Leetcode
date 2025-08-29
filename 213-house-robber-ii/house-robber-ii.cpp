class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> v1(nums.begin(),nums.end()-1),v2(nums.begin()+1,nums.end());
        int x = v1.size();
        int y = v2.size();
        vector<int>dp(x,0);
        dp[0]= v1[0] ;
       if(x > 1) dp[1]=max(v1[0],v1[1]);
        for(int i =2 ; i< x ; i++){
            int pick =v1[i]+ dp[i-2];
            int notpick = 0 + dp[i-1];
            dp[i] = max(pick,notpick);

        }
        int ans = dp[x-1];
        vector<int>dpp(y,0);
        dpp[0]= v2[0] ;
       if(y > 1) dpp[1]=max(v2[0],v2[1]);
        for(int i =2 ; i< y ; i++){
            int pick =v2[i]+ dpp[i-2];
            int notpick = 0 + dpp[i-1];
            dpp[i] = max(pick,notpick);

        }
        ans = max(ans,dpp[y-1]);
        return ans;
    }
};