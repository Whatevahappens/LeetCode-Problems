class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int num;
        int j = matrix.size();
        for(int i = 0 ; i < j ; i++){
            for(int k = i ; k < j ; k++){
                num = matrix[i][k];
                matrix[i][k] = matrix[k][i];
                matrix[k][i] = num;
            }
            for(int l = 0 ; l < j/2 ; l++){
                num = matrix[i][l];
                matrix[i][l] = matrix[i][j-1-l];
                matrix[i][j-l-1] = num;
            }
        }
    }
};