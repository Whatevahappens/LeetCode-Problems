class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pyr;
        for(int i = 0; i < numRows; i++){
            vector<int> total;
            for(int j = 0; j<=i; j++){
                if(j==0 || j==i){
                    total.push_back(1);
                }
                else{
                    total.push_back(pyr[i-1][j-1]+pyr[i-1][j]);
                }
            }
            pyr.push_back(total);
        }
        return pyr;
    }
};