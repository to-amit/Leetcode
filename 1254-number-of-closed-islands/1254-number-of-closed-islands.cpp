class Solution {
public:
    void dfs(vector<vector<int>>&grid,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=0)
            return ;
         grid[i][j]=2;
         dfs(grid,i+1,j,m,n);
         dfs(grid,i,j+1,m,n);
         dfs(grid,i-1,j,m,n);
         dfs(grid,i,j-1,m,n);
    }
    int closedIsland(vector<vector<int>>& grid) {
          int ans =0;
          int m = grid.size();
          int n = grid[0].size();
          if(n<3 ||m<3)
              return 0;
         for (int i = 0; i <grid.size(); ++i) {
        for (int j = 0; j <grid[0].size(); ++j)        
        {
 
           
            if ((i * j == 0 || i == m- 1 || j == n- 1)&&grid[i][j]==0)
                dfs(grid, i, j,m,n);
        }
    }
         for(int i=1;i<m-1;i++){
             for(int j=1;j<n-1;j++){
                 if(grid[i][j]==0){
                     dfs(grid,i,j,m,n);
                     ans++;
                 }
             }
         }
        return ans;
    }
};