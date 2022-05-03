class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen =INT_MAX;
        int sum=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            
                 sum+=nums[j];
                 
            
                 while(sum>= target && i<nums.size()){
                     
                     minlen=min(minlen,j-i+1);
                     sum-=nums[i++];
                 }
           
        }
        if(minlen ==INT_MAX)
            return 0;
        else
            return minlen;
    }
};