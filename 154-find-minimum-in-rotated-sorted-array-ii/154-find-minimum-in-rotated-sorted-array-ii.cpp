class Solution {
public:
       int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        while(low < high){
            int mid = low + (high-low)/2;
            
            int prev = nums[(mid+n-1)%n];
            int next = nums[(mid+n+1)%n];
            if(prev>nums.at(mid) && nums.at(mid)<next){
                return nums.at(mid);
            }else if(nums.at(low) < nums.at(high)){// low to high sorted so low must be smallest
                // low to high sorted
                return nums.at(low);
            }else if(nums.at(low) < nums.at(mid)){// left sorted till mid only, so smallest must be present in right half
                low = mid+1;
            }else if(nums.at(mid) < nums.at(high)){
                high = mid;
            }else{ // when boundary element are equal with mid we shrink search space
                // it wouldnt affect our search for smallest element
               if(nums.at(mid) == nums.at(high)){
                    high--;
               }else{
                   low++;
               }
            }
        }
        return nums.at(low);
    }
};