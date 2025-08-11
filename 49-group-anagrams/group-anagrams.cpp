class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for (auto s : strs){
            string k = s;
            sort(k.begin(),k.end());
            mp[k].push_back(s);
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};