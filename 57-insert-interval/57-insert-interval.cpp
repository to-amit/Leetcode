class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>inter;
        int n =intervals.size();
        int i=0;
        while(i<n && intervals[i][0]<newInterval[0]){
            inter.push_back(intervals[i]);
            i++;
        }
        inter.push_back(newInterval);
        while(i<n){
           inter.push_back(intervals[i]); 
            i++;
        }
        vector<vector<int>>ans;
        ans.push_back(inter[0]);
        for(int i=1;i<n+1;i++){
            
            if(inter[i][0]<=ans.back()[1])
            ans.back()[1] =max(inter[i][1],ans.back()[1]);
            else
              ans.push_back(inter[i]);  
            
        }
        return ans;
    }
};