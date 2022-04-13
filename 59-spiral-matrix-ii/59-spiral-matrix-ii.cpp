class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
         int top =0;
        int m=n;
        int bottom =n-1;
        int left =0;
        int right =m-1;
        int total =n*m;
        int cnt=0;
        while( cnt<total ){
            for(int i=left;cnt < total &&i<=right;i++)
            {
                cnt++;
                 v[top][i]=cnt;
            }
            top++;
            for(int i =top;cnt < total &&i<=bottom;i++)
                {
                cnt++;
                v[i][right]=cnt;
            }
               
            right--;
            for(int i =right;cnt < total && i>=left;i--)
               {
                cnt++;
                v[bottom][i]=cnt;
            } 
                
            bottom--;
            for(int i=bottom;cnt < total && i>=top;i--)
                {
                cnt++;
                 v[i][left]=cnt;
            }
               
             left++;    
        }
        return v;
    }
};