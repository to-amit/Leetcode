class Solution {
public:
    void dfs(int i,vector<int>&vis,vector<vector<int>>& isConnected){
        vis[i]=1;
        for(int j=0;j<isConnected[i].size();j++){
           if(isConnected[i][j]==1 && vis[j]==0) 
               dfs(j,vis,isConnected);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        int n =isConnected.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,vis,isConnected);
                ans++;
            }
        }
        return ans;
    }
};