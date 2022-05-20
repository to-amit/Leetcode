class Solution {
public:
    int find_util(int m,int n , vector<vector<int>>&dp){
    
    
    if(m==0 and n==0) return 1;
    
    if(m<0 or n<0) return 0;
    
    
    if(dp[m][n]!=-1) return dp[m][n];
    
    
    
    int up = find_util(m-1,n,dp);
    int left = find_util(m,n-1,dp);
    
    
    return dp[m][n]=left+up;
    
    
}
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp (m,vector<int>(n,-1));
     
     
     
     return find_util(m-1,n-1,dp);        
    }
};