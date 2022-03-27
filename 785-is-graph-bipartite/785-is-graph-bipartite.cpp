class Solution {
public:
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n =graph.size();
        vector<int>visited(n,-1);
        queue<int>q;
        for(int i=0;i<n;i++){
            if(visited[i]!=-1)
                continue;
            q.push(i);
            visited[i]=0;
            while(!q.empty()){
                int tmp =q.front();
                q.pop();
                for(int j=0;j<graph[tmp].size();j++){
                    if(visited[graph[tmp][j]] == -1){
                        visited[graph[tmp][j]] = !visited[tmp];
                        q.push(graph[tmp][j]);
                        
                    }else if(visited[tmp] == visited[graph[tmp][j]])
                        return false;
                }
            }
        }
        return true;
    }
};