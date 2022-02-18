class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size(), rem = n - k;
        for(int i = 0; i < n; i++) {
            while(res.size() && rem && nums[i] < res.back()) {
                res.pop_back();
                rem--;
            }
            res.push_back(nums[i]);
        }
        while(rem) {
            res.pop_back();
            rem--;
        }
        return res;
        
        
    }
};