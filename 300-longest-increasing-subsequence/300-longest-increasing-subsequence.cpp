class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+2,vector<int>(nums.size()+2,0));
        for(int i=nums.size()-1;i>=0;i--)
        {
            for(int prev=i-1;prev>=-1;prev--)
            { 
                int take=0;
                 if(prev==-1||nums[i]>nums[prev])
                 {
                    take=1+dp[i+1][i+1];
                 }
                 int nottake=dp[i+1][prev+1];
                 dp[i][prev+1]=max(take,nottake);
            }
        }
       return dp[0][0];
    }
};