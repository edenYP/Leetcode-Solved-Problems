class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        if(r * c != mat.size() * mat[0].size()) return mat;

        int m = mat.size();
        int n = mat[0].size();


        std::vector<std::vector<int>> result(r, vector<int>(c));

        int row = 0;
        int col = 0;


        for(int i = 0; i < r ; i++){
            for(int j = 0; j < c; j++){
                result[i][j] = mat[row][col];   
                col++;

                if(col == n){
                    col = 0;
                    row++;
                }

            }
        }


        return result;
    }
};