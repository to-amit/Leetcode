class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        st.push({s[0],1});
        for(int i=1;i<s.length();i++){
            if(!st.empty()&& st.top().first==s[i]){
                st.push({s[i],st.top().second+1});
                if(st.top().second==k){
                    while(!st.empty() && st.top().first==s[i]) st.pop();
                }
            }
            else{
                  st.push({s[i],1});
                if(st.top().second==k){
                    while(!st.empty() && st.top().first==s[i]) st.pop();
                }
            }
        }
       s="";
        while(!st.empty()){
           s+=st.top().first;
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};