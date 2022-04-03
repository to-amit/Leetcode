class Solution {
public:
    bool isCycle(int i,vector<vector<int>>& graph,vector<int>&vis){
        if(vis[i]==-1)
        vis[i]=1;
        for(auto it :graph[i]){
            if(vis[it]==-1){
                vis[it]=1-vis[i];
               if(isCycle(it,graph,vis))
                   return true;
            }else if(vis[i]==vis[it])
                return true;
                
        }
        return false;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n =graph.size();
        vector<int>visited(n+1,-1);
        for(int i=0;i<n;i++){
            if(visited[i]==-1)
            if(isCycle(i,graph,visited))
                return false;
        }
       return true;
    }
};