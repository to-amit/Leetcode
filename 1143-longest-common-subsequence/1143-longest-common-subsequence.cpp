class Solution {
public:
    int longestCommonSubsequence(string str1, string str2) {
       int n=str1.size();
	   int m=str2.size();
	   int arr[n+1][m+1];
	   for(int i=0;i<=n;i++)
	   arr[i][0]=0;
	   for(int i=0;i<=m;i++)
	   arr[0][i]=0;
	   for(int i=1;i<=n;i++){
           
	       for(int j=1;j<=m;j++){
	       if(str1[i-1]==str2[j-1])
	       arr[i][j] =1+arr[i-1][j-1];
	       else
	       arr[i][j] = max(arr[i][j-1],arr[i-1][j]);
	       }
       }
        return arr[n][m];
    }
};