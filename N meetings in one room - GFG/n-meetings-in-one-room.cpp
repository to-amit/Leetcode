// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
      public:
     static bool comp(pair<int, int> a, pair<int, int> b)
        {
      
        return a.second < b.second;
        }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int> > v(n);
        for(int i = 0; i < n; i++)
        v[i] = { start[i], end[i] };
        sort(v.begin(), v.end(), comp);
        
      int j=0;
      int c=1;
       for(int i=1;i<n;i++){
           if(v[i].first>v[j].second){
               c++;
               j=i;
           }
       }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends