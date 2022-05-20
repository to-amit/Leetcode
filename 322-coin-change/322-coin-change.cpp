class Solution {
public:
    int coinChange(vector<int>& coins, int total) {
        int  n=coins.size();
        int dp[n+1][total+1];
        for(int  i=0;i<=total;i++)
            dp[0][i]=INT_MAX-1;
        for(int  i=0;i<=total;i++){
            if(i%coins[0]==0)
                dp[1][i]=i/coins[0];
            else
                dp[1][i]=INT_MAX-1;
        }
        for(int i=1;i<=n;i++)
            dp[i][0]=0;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=total;j++){
                if(coins[i-1]<=j)
                    dp[i][j] = min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                else
                    dp[i][j] =dp[i-1][j];
            }
        }
        return dp[n][total]==INT_MAX-1?-1:dp[n][total];
    }
};