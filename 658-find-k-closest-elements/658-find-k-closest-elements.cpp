class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
       
        vector<int>v;
        int low=0;
        int high=nums.size()-1;
        while(high-low>=k){
            if(abs(nums[low]-x)>abs(nums[high]-x))
                low++;
            else
                high--;
        }
        for(int i=low;i<=high;i++)
            v.push_back(nums[i]);
        return v;
    }
};