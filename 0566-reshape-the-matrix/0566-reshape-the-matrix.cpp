class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        if(r * c != mat.size() * mat[0].size()){
            return mat;
        }

        vector<vector<int>> transformed;
        transformed.push_back({});

        int totalcol = mat[0].size();

        int a = 0;
        int b = 0;
        int d = 0;

        for(int i = 0; i < r * c; i++){

            transformed[a].push_back(mat[b][d]);

            d++;

            if(d == totalcol){
                d = 0;
                b++;
            }

            if(transformed[a].size() == c && a < r - 1){
                a++;
                transformed.push_back({});
            }
        }

        return transformed;
    }
};