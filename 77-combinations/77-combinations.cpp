class Solution {
public:
 vector<vector<int>> ans;
    
    void helper(int n, int k, vector<int> temp, int index)
    {
        if(temp.size() == k)        // Base case: since we want size = k
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=index; i<=n; i++)
        {
            temp.push_back(i);          // Add the element to current vector to backtrack later
            helper(n, k, temp, i+1);
            temp.pop_back();            // Backtrack
        }
    }
    
    vector<vector<int>> combine(int n, int k) 
    {
        vector<int> temp;
        helper(n, k, temp, 1);
		
        return ans;
    }
    
}; 