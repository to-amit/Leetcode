class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& image,int newColor,int p){
        
if(i>=image.size() || j>=image[0].size() || i<0 || j<0 || image[i][j]!=p || image[i][j]==newColor)
return ;
        
         image[i][j]=newColor;
         dfs(i+1,j,image,newColor,p);
         dfs(i,j+1,image,newColor,p);
         dfs(i-1,j,image,newColor,p);
         dfs(i,j-1,image,newColor,p);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        dfs(sr,sc,image,newColor,image[sr][sc]);
        return image;
        
    }
};