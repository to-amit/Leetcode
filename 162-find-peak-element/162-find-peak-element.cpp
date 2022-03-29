class Solution {
public:
     int findPeakElement(vector<int>& nums) {
        int l=0, r=nums.size();
        if(r==1 || nums[0]>nums[1] )
            return 0;
        else if(nums[r-1]>nums[r-2])
            return r-1;
        else  while(l<r)
        {
            int mid=(l+r)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            else
                if(nums[mid]>nums[mid-1])
                    l=mid+1;
                else
                    r=mid;
                
        }
        return 0;
    }

};