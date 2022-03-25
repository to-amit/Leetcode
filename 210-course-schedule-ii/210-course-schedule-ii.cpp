class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int>q;
        vector<int> indegree(numCourses,0);
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++)
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        for(int i=0;i<numCourses;i++){
            for(int j=0;j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }
        vector<int>ans;
        for(int i=0;i<numCourses;i++)
            if(indegree[i]==0)
                q.push(i);
        int n =0;
        while(!q.empty()){
            int temp =q.front();
            q.pop();
            n++;
            ans.push_back(temp);
            for(int i=0;i<adj[temp].size();i++){
                indegree[adj[temp][i]]--;
                if(indegree[adj[temp][i]]==0)
                    q.push(adj[temp][i]);
            }
            
        }
       if(n==numCourses) return ans;
        else return vector<int>();
    }
};