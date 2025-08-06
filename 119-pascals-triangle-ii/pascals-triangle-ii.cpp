class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1  ;
        vector<int>purirow;
        purirow.push_back(1);
        for(int c =1 ; c <=  rowIndex; c++){
            ans = ans*(rowIndex - c+1);
            ans  = ans / c ;
            purirow.push_back(ans);
        }
        return purirow;
    }
};