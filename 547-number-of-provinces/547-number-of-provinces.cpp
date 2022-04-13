class Solution {
public:
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
     
		int n=isConnected.size(),cnt=0;
		vector<bool> vis(n,false);
		for(int i=0;i<n;i++){
			if(!vis[i]){
				cnt++;
				dfs(isConnected,i,vis);
			}
		}
		return cnt;
	}
	void dfs(vector<vector<int>>& graph,int st,vector<bool> &vis){
		vis[st]=true;
		for(int i=0;i<graph[st].size();i++){
			if(graph[st][i]==1 && !vis[i])  dfs(graph,i,vis);
		}
	}
        
    
};