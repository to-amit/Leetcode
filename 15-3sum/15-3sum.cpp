class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans ;
        
        int n = nums.size() ;
        
        for(int i=0; i<n-2; i++)
        {
            while(i != 0 && i < n-2 && nums[i-1] == nums[i])
                i++ ;
            
            int j = i+1, k = n-1; 
            
            while(j < k)
            {
                int sum = nums[i]+nums[j]+nums[k] ;
                
                if(sum == 0)
                    ans.push_back({nums[i], nums[j++], nums[k--]}) ;
                
                else if(sum < 0)
                    j++ ;
                
                else
                    k-- ;
                
                while(j != i+1 && j < k && nums[j-1] == nums[j])
                    j++ ;
                while(k != n-1 && j < k && nums[k+1] == nums[k])
                    k-- ;
            }
        }
        
        return ans ;
    }
};