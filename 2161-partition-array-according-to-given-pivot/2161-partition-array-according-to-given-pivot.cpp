class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
         int n = nums.size();
        vector<int> res(n);
        int l = 0, r = n - 1; 
        for (int a : nums) {
            if (a < pivot) {
                res[l++] = a;
            } else if (a > pivot) {
                res[r--] = a;
            }
        }
        while (l <= r) {
            res[l++] = pivot;
        }
        reverse(res.begin() + r + 1, res.end());
        return res;
    }
};
        
