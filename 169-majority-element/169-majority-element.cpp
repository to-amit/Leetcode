class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n = nums.size();
        int candidate = nums[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(cnt==0){
                candidate=nums[i];
                cnt=1;
            }
            else{
                if(candidate==nums[i])cnt++;
                else cnt--;
            }
        }
        
        
        return candidate;
    }
};