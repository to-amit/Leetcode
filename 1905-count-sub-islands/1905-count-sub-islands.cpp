class Solution {
public:
   bool islands(int r, int c, vector<vector<int>> &grid1, vector<vector<int>>  &grid2)
{
    if(r < 0 || c < 0 || r >= grid1.size() || c >= grid1[0].size())
        return true;
    
    if(grid1[r][c] == 0 && grid2[r][c] == 0)
        return true;
    else if(grid2[r][c] == 1 && grid1[r][c] == 0)
        return false;
    else if(grid1[r][c] == 1 && grid2[r][c] == 0)
        return true;
    
    grid1[r][c] = 0;
    grid2[r][c] = 0;
    
    bool l = islands(r,c-1,grid1,grid2);
    bool ri = islands(r,c+1,grid1,grid2);
    bool d = islands(r+1,c,grid1,grid2);
    bool u = islands(r-1,c,grid1,grid2);
    
    return l && ri && d && u;
}

int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
    
    int cnt = 0;
    for(int i=0; i<grid1.size(); i++)
    {
        for(int j=0; j<grid1[0].size(); j++)
        {
            if(grid2[i][j] == 1 && islands(i,j,grid1,grid2))
                cnt++;
        }
    }
    
    return cnt;
}
};