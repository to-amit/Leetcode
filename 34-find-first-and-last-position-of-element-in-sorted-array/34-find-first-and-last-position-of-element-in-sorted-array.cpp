class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
       int a=-1;
        int b=-1;
        int l=0;
        int n=nums.size();
        int r=n-1;
         while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                a=mid;
                if((mid-1)>=0 && nums[mid-1]!=target ){
                  
                    break;
                }
                else{
                    r=mid-1;
                }
                  
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                b=mid;
                if((mid+1)<n && nums[mid+1]!=target ){
                    b=mid;
                    break;
                }
                else{
                    l=mid+1;
                }
                  
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
       
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};