class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int pro=1;
         int ans=0;
         int j=0;
        for(int i=0;i<nums.size();i++){
            pro=pro*nums[i];
            while(pro>=k && j<nums.size()){
                pro=pro/nums[j++];
            }
            if(pro<k)
            ans+=(i-j)+1;
        }
        return ans;
    }
};