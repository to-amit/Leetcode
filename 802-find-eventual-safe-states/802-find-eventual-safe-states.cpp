class Solution {
public:
bool isCycle(int src,vector<bool>&vis,vector<bool>&visDfs,vector<bool>&presentCycle,vector<vector<int>>& graph){
    vis[src]=true;
    visDfs[src]=true;
    for(auto it: graph[src]){
        if(vis[it]==false){
            if(isCycle(it,vis,visDfs,presentCycle,graph)){
                presentCycle[src] =true;
                return true;
            }
        }else if(vis[it] && visDfs[it]){
            presentCycle[src] =true;
            return true;
        }
    }
    visDfs[src]=false;
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n =graph.size();
        vector<bool>vis(n,false);
        vector<bool>visDfs(n,false);
        vector<bool>presentCycle(n,false);
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                isCycle(i,vis,visDfs,presentCycle,graph);
            }
        }
        for(int i=0;i<n;i++){
            if(presentCycle[i]==false)
                ans.push_back(i);
        }
        return ans;
    }
};