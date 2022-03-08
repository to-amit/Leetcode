class Solution {
public:
    bool binarySearch(vector<int>&temp,int n,int key){
        int l=0,r=n-1;
       
        while(l<=r){
            int mid =(l+r)/2;
            if(temp[mid]==key){
                return true;
            }else if(temp[mid]>key){
               r=mid-1; 
            }else{
                l=mid+1;
            }
        }
        
        
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n && matrix[i][j]<target)i++;
        if(i<n){
            return binarySearch(matrix[i],m,target);
        }
        return false;
    }
};