class Solution {
public:
    bool backspaceCompare(string s, string t) {
         stack<char>st1;
        stack<char>st2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' ){
                if(!st1.empty())
                st1.pop();
            }else
                st1.push(s[i]);
        }
         for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                 if(!st2.empty())
                st2.pop();
            }else
                st2.push(t[i]);
        }
        string s1="",s2="";
        while(!st1.empty()){
            s1=st1.top()+s1;
            st1.pop();
        }
       
        while(!st2.empty()){
            s2=st2.top()+s2;
            st2.pop();
        }
        cout<<s1<<" "<<s2<<endl;
        if(s1==s2)
            return true;
        return false;
    }
};