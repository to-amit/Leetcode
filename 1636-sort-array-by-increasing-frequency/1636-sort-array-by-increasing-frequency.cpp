class Solution {
public:
    vector<int> frequencySort(vector<int>&nums) {
       unordered_map<int,int> mp;
        int i;
        for(i = 0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        sort(nums.begin(), nums.end(), [&](int& a, int& b)
             {
                 return mp[a] == mp[b] ? a>b : mp[a] < mp[b];
             });
        
        return nums;
    }
};