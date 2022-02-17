class Solution {
public:
    string removeDuplicates(string s) {
         stack<char>st;
        for(int i=s.length()-1;i>=0;i--){
            if(st.empty())
                st.push(s[i]);
            else  if(s[i]==st.top())
                st.pop();
            else
                st.push(s[i]);
            
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};