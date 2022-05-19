class Solution {
    vector<vector<int>>ans;
    vector<int>temp;
public:
    void find(int n,int k,int target){
        if(temp.size()==k){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(n<=9 &&   n<=target){
            temp.push_back(n);
            find(n+1,k,target-n);
            temp.pop_back();
        }
        if(n<=9)
         find(n+1,k,target);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
         find(1,k,n);
         return ans;
    }
};