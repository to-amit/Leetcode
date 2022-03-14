class Solution {
public:

    int fun(int i ,int  j , vector<vector<int>>&grid){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return 0;
        grid[i][j]=0;
        return 1+fun(i+1,j,grid)+fun(i,j+1,grid)+fun(i-1,j,grid)+fun(i,j-1,grid);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int  ans =0;
        for(int  i=0;i<grid.size();i++){
            for(int  j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                    ans =max(ans,fun(i,j,grid));
            }
        }
        
        return ans;
    }
};