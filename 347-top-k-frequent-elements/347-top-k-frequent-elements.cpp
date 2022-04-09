class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
       unordered_map<int,int>mp;
        for(auto it :arr)
            mp[it]++;
        priority_queue<pair<int,int>>hp;
        for(auto it:mp)
          hp.push({it.second,it.first});
        vector<int>ans;
        for(int i=0;i<k;i++){
           ans.push_back(hp.top().second);
            hp.pop();
        }
       return ans;
    }
};