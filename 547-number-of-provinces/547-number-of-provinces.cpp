class Solution {
public:
   
    int findCircleNum(vector<vector<int>>& isConnected) {
       int count =0;
       int n =isConnected.size();
       vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                
                count++;
                queue<int>q;
                q.push(i);
                vis[i]=1;
                
                while(!q.empty()){
                    int temp=q.front();
                    q.pop();
                    vis[temp] =1;
                    for(auto it :adj[temp]){
                        if(vis[it]==-1){
                            vis[it]=1;
                            q.push(it);
                        }
                    }
                    
                }
                
            }
        }
        return count;
    }
};