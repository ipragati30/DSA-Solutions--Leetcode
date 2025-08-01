class Solution {
public:
    vector<int> ncr(int row){
        long long ans = 1  ;
        vector<int>purirow;
        purirow.push_back(1);
        for(int c =1 ; c <  row; c++){
            ans = ans*(row - c);
            ans  = ans / c ;
            purirow.push_back(ans);
        }
        return purirow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>aans;
        for (int i = 1 ; i <= numRows ; i++){
            aans.push_back(ncr(i));
        }
        return aans;
    }
};