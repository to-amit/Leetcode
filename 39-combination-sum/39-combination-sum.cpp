class Solution {
public:
    void findcombination
        (int ind,int target,vector<int> &cand,vector<vector<int>> &ans,vector<int> &ds)
    {
        if(ind ==cand.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(cand[ind]<= target){
           ds.push_back(cand[ind]);
           findcombination(ind, target-cand[ind],cand,ans,ds);
           ds.pop_back() ;
        }
         findcombination(ind+1, target,cand,ans,ds);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> ds;
        findcombination(0,target,candidates,ans,ds);
        return ans;
    }
};