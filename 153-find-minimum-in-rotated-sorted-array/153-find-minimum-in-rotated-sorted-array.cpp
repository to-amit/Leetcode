class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
       if(nums[0]<=nums[n-1])
	   return nums[0];
	   int start=0;
       
        int end=n-1;
	   while(start<=end)
        {
            int mid=start+((end-start)/2);
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev])
            {
                return nums[mid];
            }
            else if(nums[mid]>=nums[0])
            {
                start=mid+1;
            }else 
            {
                end=mid-1;
            }
        }
        return -1;
	}
};