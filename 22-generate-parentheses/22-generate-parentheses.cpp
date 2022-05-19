class Solution {
public:
     void foo(int n,int open,int close,vector<string> &ans,string temp){
        if(close==n){
            ans.push_back(temp);
            return;
        }
        if(open<n)
            foo(n,open+1,close,ans,temp+"(");
        if(open>close)
            foo(n,open,close+1,ans,temp+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        foo(n,0,0,ans,"");
        return ans;
    }
};