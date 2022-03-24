class Solution {
public:
    int dist(pair<int,int>a,pair<int,int>b){
        return abs(a.first-b.first)+abs(a.second-b.second)-1;
    }
    void flood(int i,int j,set<pair<int,int>>&st,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return ;
            
        st.insert({i,j});
        grid[i][j]=0;
        flood(i+1,j,st,grid);
        flood(i,j+1,st,grid);
        flood(i-1,j,st,grid);
        flood(i,j-1,st,grid);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        set<pair<int,int>>st1;
        set<pair<int,int>>st2;
        int bo=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && bo==0){
                    bo=1;
                    flood(i,j,st1,grid);
                }else{
                    flood(i,j,st2,grid);
                }
            }
        }
     int ans=2*grid.size();
        for(auto i:st1){
            for(auto j:st2){
                ans=min(ans,dist(i,j));
            }
        }
        return ans;
    }
};
