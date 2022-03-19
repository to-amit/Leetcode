class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length(),m =s2.length();
        if(m<n) return false;
        vector<int>first(26,0),second(26,0);
        for(int i=0;i<n;i++){
            first[s1[i]-'a']++;
            second[s2[i]-'a']++;
        }
        if(first==second) return true;
        for(int i=n;i<m;i++){
             second[s2[i]-'a']++;
             second[s2[i-n]-'a']--;
             if(first==second) return true;
        }
       return false;
    }
};