class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string ans ="";
        priority_queue<pair<int, char>> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
       
        while(!pq.empty()){
            int num =pq.top().first;
            char c =pq.top().second;
            for(int i=0;i<num;i++)
                ans+=c;
            pq.pop();
        }
        return ans;
    }
};