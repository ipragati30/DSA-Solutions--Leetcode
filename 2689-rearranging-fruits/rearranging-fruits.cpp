class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>mp;
        int mini = INT_MAX;
        for (int i = 0 ; i < basket1.size() ; i++){
            mp[basket1[i]]++;
            mini = min(mini , basket1[i]);
        }
        for (int i = 0 ; i < basket2.size() ; i++){
            mp[basket2[i]]--;
            mini = min(mini , basket2[i]);
        }
        vector<int>ele;
        
        for (auto it : mp) {
            int a = it.first;
            int b = it.second;
            if(b==0){
                continue;
            }
            if (b % 2 != 0) return -1;
            for (int i  = 1 ; i <= abs(b/2) ; i++){
                ele.push_back(a);
            }
        }
        sort(ele.begin(),ele.end());
        long long ans = 0;
       for(int i = 0 ; i < ele.size()/2 ;i++){
        ans += min(ele[i],mini*2);
       }
    return ans; 
    }
};