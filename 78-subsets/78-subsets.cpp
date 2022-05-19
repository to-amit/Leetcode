class Solution {
public:
    vector<vector<int>>ans;
    void subset(int i,vector<int>&nums,vector<int>&curr){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        subset(i+1,nums,curr);
        curr.push_back(nums[i]);
        subset(i+1,nums,curr);
        curr.pop_back();
        return;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        subset(0,nums,curr);
        sort(ans.begin(),ans.end());
        return ans;
    }
};