// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
   static bool comparator(pair<int,int> p1,pair<int,int> p2)
   {
       
       return p1.second<p2.second;
       
   }
   
   
   
   int maxMeetings(int start[], int end[], int n)
   {
       vector<pair<int,int>> sorted;
       
       
       for(int i=0;i<n;i++)
       {
         
           sorted.push_back({start[i],end[i]});
           
       }
           
       
       
       sort(sorted.begin(),sorted.end(),comparator);
       int count=1;
       int j=0;
       for(int i=1;i<n;i++)
       {
           
           if(sorted[i].first>sorted[j].second)
           {
               count++;
               j=i;
           }
           
       }
       
       return count;
       
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