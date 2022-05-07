class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<pair<int, int>> st;
        int mini = INT_MAX; //store minimum value 
        
        //iterate over nums array
        for(int k=0; k<nums.size(); k++)
        {
            //if stack is not empty then we find mini value present in the stack
            if(!st.empty())
                mini = min(mini, st.top().first);
            
            //till nums[k] is greater than top element of stack i.e. nums[j], we pop the element
            while(!st.empty() && nums[k]>st.top().first) 
                st.pop();
            
            //we check the conditon nums[i]<nums[k]<nums[j] if it exists return true
            if(!st.empty())
            {
                //if top mini value is less than nums[k] and nums[k] is less than top value of stack, returns true
                if((st.top().second < nums[k]) && (nums[k] < st.top().first)) return true;
            }
            
            //store current value and minimum value in the stack
            st.push({nums[k], mini});
        }
        //if pattern not exists return false;
        return false;
    }
};









