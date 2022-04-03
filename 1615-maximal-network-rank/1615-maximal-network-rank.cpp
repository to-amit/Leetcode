class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> deg(n,0);
        int ans = 0;
        vector<vector<int>> con(n,vector(n,0));
        for(auto it : roads){
            deg[it[0]]++;
            deg[it[1]]++;
            con[it[0]][it[1]] = 1;
            con[it[1]][it[0]] = 1;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                ans = max(ans,deg[i]+deg[j]-con[i][j]);
            }
        }
        
        return ans;
    }
};