class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
         vector<vector<int>> ans=board;
    
    int n=board.size(), m=board[0].size();
   
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            int c1=0, tot=0;
            if(i-1>=0 && j-1>=0){
                tot++;
                if(ans[i-1][j-1]==1) c1++;
            }
            if(i-1>=0){
                tot++; if(ans[i-1][j]==1) c1++;
            }
            if(i-1>=0 && j+1<m){
                tot++; if(ans[i-1][j+1]==1) c1++;
            }
            if(j+1<m){
                tot++; if(ans[i][j+1]==1) c1++;
            }
            if(j-1>=0){
                tot++; if(ans[i][j-1]==1) c1++;
            }
            if(i+1<n && j-1>=0){
                tot++; if(ans[i+1][j-1]==1) c1++;
            }
            if(i+1<n ){
                tot++; if(ans[i+1][j]==1) c1++;
            }
            if(i+1<n && j+1<m){
                tot++; if(ans[i+1][j+1]==1) c1++;
            }
            int c0=tot-c1;
            if(ans[i][j]==0 && c1==3){
                board[i][j]=1;
            }
            else if(ans[i][j]==1 ){
                if(c1<2) board[i][j]=0;
                else if(c1>3) board[i][j]=0;
            }
        }
    }
    }
};