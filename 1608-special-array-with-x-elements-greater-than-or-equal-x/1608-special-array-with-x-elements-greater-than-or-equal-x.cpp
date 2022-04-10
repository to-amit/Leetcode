class Solution {
public:
    int specialArray(vector<int>& nums) {
         int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int len = n - i;                      // len gives the number of elements greater than
												  // or equal to nums[i]...i.e the number of elements on its right
            if(
                len <= nums[i] &&                
                (i == 0 || len > nums[i-1])
            ){
                return len;
            }
        }
        
        return -1;
    }
};