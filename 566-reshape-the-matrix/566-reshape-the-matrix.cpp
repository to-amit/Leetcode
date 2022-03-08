class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      
        int m=mat.size();
        int n=mat[0].size();
        if(m*n !=r*c)
            return mat;
        if(m==r && n==c)
            return mat;
        vector<vector<int>> v(r, vector<int>(c));
        int i=0,j=0;
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                v[i][j++]=mat[row][col];
                if (j >= c) {
                    i ++;
                    j = 0;
                }
            }
        }
        return v;
    }
};