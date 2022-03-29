class Solution {
public:
  
void allPath(int curr,vector<vector<int>>&graph,vector<int>&path,                               vector<int>&vis,vector<vector<int>>&ans){
        vis[curr] = 0;
        path.push_back(curr);
        if(curr == graph.size()-1){
            ans.push_back(path);
            vis[curr]==0;
            path.pop_back();
            return ;
        }
        
        for(auto it :graph[curr]){
            if(vis[it] == 0){
                allPath(it,graph,path,vis,ans);
            }
        }
        vis[curr]=0;
        path.pop_back();
        return ;
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n =graph.size();
        vector<int>vis(n,0);
        vector<int>path;
        vector<vector<int>>ans;
        allPath(0,graph,path,vis,ans);
        return ans;
    }
};