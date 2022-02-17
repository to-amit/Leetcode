

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char , int>>st;
    st.push({s[0] , 1});
    for(int i=1 ; i < s.size() ; i++){
        if(!st.empty() and st.top().first == s[i])st.top().second++;
        else st.push({s[i] , 1});
        if(st.top().second ==k)st.pop();
    }
    string ans = "";
    while(!st.empty()){
        if(st.top().second == k){
            st.pop();
            continue;
        }
        while(st.top().second--)ans += st.top().first;
        st.pop();
    }
    reverse(ans.begin() , ans.end());
    return ans;
    }
};