class Solution {
public:
   vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
   //jiska indegree 0 hoga ho ans hoga
     vector<int>adj[n]; //adjajecy list
    vector<int>inorder(n,0); //inorder
    for(int i=0;i<edges.size();++i)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        inorder[edges[i][1]]++;
    }
   
    vector<int>q;
   for(int i=0;i<n;++i)
   {
       if(inorder[i]==0)
       {
           q.push_back(i);
       }
   }
    return q;
}
};
