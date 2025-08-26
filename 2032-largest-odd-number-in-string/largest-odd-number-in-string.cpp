class Solution {
public:
    string largestOddNumber(string num) {
        int j = -1 ;
        for(int i = num.size() ; i >= 0 ; i--){
            if(num[i]%2!=0){
                j = i ;
                break;
            }
        }
        return num.substr(0,j+1);
    }
};