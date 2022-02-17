class Solution {
public:
   vector<vector<int>> ans;
    vector<int> temp;
    void solve(vector<int>& arr, int target,int s){
        if(target<0) return;
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=s;i<arr.size();i++){
            // if(arr[i]>target) break;
            if(i>s and arr[i]==arr[i-1]) continue;
            temp.push_back(arr[i]);
            solve(arr,target-arr[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(begin(arr),end(arr));
        solve(arr,target,0);
        return ans;
    }
};