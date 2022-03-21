class Solution {
public:
    string reverseStr(string s, int k) {
        if ( k== 1 ) return s;
        string ans;
        string tmp = "";
        int i =0;
        int limit = k;
        for (auto c:s){
            if (i<limit) tmp = c+tmp;
            else {
                if(i == limit) ans += tmp;
                tmp = "";
                ans += c;
                if (i+1 == limit +k) limit = i+k+1;
            }
            i++;
        }
        if (tmp != "") ans += tmp;
        return ans;
    }
};