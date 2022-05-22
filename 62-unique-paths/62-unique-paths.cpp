class Solution {
public:
    int numberOfPaths(int m, int n,vector<vector<int>>&dp)
    {
       
        if (m == 1 || n == 1)
            return dp[m][n]=1;
        if(dp[m][n]!=-1)return dp[m][n];
        
       return dp[m][n]= numberOfPaths(m - 1, n,dp) + numberOfPaths(m, n - 1,dp);
     
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return numberOfPaths(m,n,dp);
        
    }
};