class Solution {
public:
    //[49,1,0,9,100]
    //i          j
    vector<int> sortedSquares(vector<int>& nums) {
        int  n=nums.size();
        for(int  i=0;i<n;i++){
          nums[i] =nums[i]*nums[i];  
        }
        vector<int>ans(n);
        int i=0;int  j=n-1;
        
        int  k=n-1;
        while(i<=j){
            if(nums[i]>nums[j]){
               ans[k--]=nums[i]; 
                i++;
            }else if(nums[j]>nums[i]){
                ans[k--]=nums[j];
                j--;
            }else
            {
                ans[k--]=nums[i];
                i++;
               
            }
        }
        return ans;
        
    }
};