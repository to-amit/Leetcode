class Solution {
public:
     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
         int m =mat.size();
         int n =mat[0].size();
         
         for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                 if(mat[i][j]==0){
                     q.push({i,j});
                 }else
                     mat[i][j]=-1;
             }
         }
        int level = 0;
        int dir[4][2] = {{0,1}, {0,-1},{1,0},{-1,0}};
         
         while(!q.empty()){
             level++;
             int size =q.size();
             while(size--){
                 pair<int,int> p =q.front();
                 q.pop();
                 for(auto d: dir)
                {
                    int r = p.first+d[0];
                    int c = p.second+d[1];
                 
                
                if(r<0||r>=m||c<0||c>=n|| mat[r][c]!=-1)
                    continue;
                
                    mat[r][c] = level;
               
                    q.push({r,c});
                }
             }
             
         }
         return mat;
    }
};