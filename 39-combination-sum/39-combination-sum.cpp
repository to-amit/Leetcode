class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void findSum(int i,vector<int>&cand,int k){
        if(i==cand.size()){
            if(k==0)
            {
                ans.push_back(temp);
            }   
           return; 
        }
        if(cand[i]<=k){
            temp.push_back(cand[i]);
            findSum(i,cand,k-cand[i]);
            temp.pop_back();
        }
         findSum(i+1,cand,k);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        temp.clear();
        findSum(0,candidates,target);
        return ans;
    }
};