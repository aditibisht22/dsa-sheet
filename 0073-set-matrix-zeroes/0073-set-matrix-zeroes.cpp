
class Solution {
public:

void markRows(vector<vector<int>>& matrix, int i ){
    for(int j =0; j<matrix[i].size(); j++){
          if(matrix[i][j] != 0){
                 matrix[i][j] = INT_MIN;
          }
    }
}

void markCol(vector<vector<int>>& matrix, int j ){
    for(int i  = 0; i<matrix.size(); i++){
        if(matrix[i][j] != 0){
             matrix[i][j] = INT_MIN;
        }
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0 ; j<matrix[i].size() ; j++){
                if(matrix[i][j] == 0){
                    markRows(matrix, i);
                    markCol(matrix,j);
                }
            }
        }
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                if(matrix[i][j] == INT_MIN){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};