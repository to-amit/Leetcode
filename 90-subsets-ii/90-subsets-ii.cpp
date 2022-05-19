class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>>ans;
         sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i=0;i<(1<<nums.size());i++){
            vector<int>temp;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                    temp.push_back(nums[j]);
                }
                
            }
            st.insert(temp);
            temp.clear();
        }
        for(auto it :st){
            ans.push_back(it);
        }
        return ans;
    }
};