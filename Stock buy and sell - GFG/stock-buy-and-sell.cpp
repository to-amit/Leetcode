// { Driver Code Starts

// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}
// } Driver Code Ends



void stockBuySell(int a[], int n) {
    // code here
    int min=a[0];
    int max=a[0];
    int minin=0;
    int maxin=0;
    int c=0;
    for(int i=1;i<n;i++)
    {
       
       if(a[i]>=max)
       {
           max=a[i];
           maxin=i;
            if(min==a[i])
          {
              min=a[i];
           minin=i;
          }
           if(i==n-1 && max>min)
            {c++;
                cout<<"("<<minin<<" "<<maxin<<") ";
                
            }
                
       }
       if(a[i]<max || max==0)
       {
           if(max-min>0)
           {
               c++;
               cout<<"("<<minin<<" "<<maxin<<") ";
           }
           min=a[i];
           minin=i;
           max=min;
           maxin=i;
           
       }
    }
    if(c==0)
    cout<<"No Profit";
    cout<<endl;
}