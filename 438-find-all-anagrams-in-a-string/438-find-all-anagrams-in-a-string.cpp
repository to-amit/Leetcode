class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>sv(26,0);
        vector<int>pv(26,0);
        
        int n =s.length();
        int m =p.length();
        
        vector<int>ans;
        
        if(m>n)return ans;
        
        for(int i=0;i<m;i++){
            sv[s[i]-'a']++;
            pv[p[i]-'a']++;
        }
        if(sv==pv)
            ans.push_back(0);
        for(int i=m;i<n;i++){
            sv[s[i]-'a']++;
            sv[s[i-m]-'a']--;
            if(sv==pv)
                ans.push_back(i-m+1);
        }
        return ans;
    }
};