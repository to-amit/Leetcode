class Solution {
public:
    string reverseWords(string s) {
        string word="";
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                word=s[i]+word;
            }else{
                ans+=word+' ';
                word="";
            }
        }
                ans+=word;
                word="";
       return ans; 
    }
};