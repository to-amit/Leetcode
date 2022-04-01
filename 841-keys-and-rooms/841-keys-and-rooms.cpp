class Solution {
public:
    void dfs(vector<vector<int>>& rooms, vector<bool>&visit,int i){
        visit[i]=true;
        for(auto it:rooms[i]){
            if(visit[it]!=true)
                dfs(rooms,visit,it);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n =rooms.size();
        vector<bool>visit(n,false);
        dfs(rooms,visit,0);
        for(int i=0;i<n;i++)
            if(visit[i]==false)
                return false;
        return true;
    }
};