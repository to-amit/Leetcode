class Solution {
public:
    int firstUniqChar(string s) {
int n= s.size(),i;
int c[256]={0};
for(i=0;i<n;i++)
c[s[i]]++;
for(i=0;i<n;i++)
{
if(c[s[i]]==1)
return i;
}
return -1;
}
};