class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>q;
        int n =arr.size();
        for(int i=0;i<n;i++){
            q.push({abs(x-arr[i]),arr[i]});
            if(q.size()>k)
                q.pop();
        }
        vector<int>v;
         priority_queue<int,vector<int>,greater<int>>r;
        while(!q.empty()){
            r.push(q.top().second);
            q.pop();
        }
        while(!r.empty()){
           v.push_back(r.top());
            r.pop();
        }
        return v;
    }
};