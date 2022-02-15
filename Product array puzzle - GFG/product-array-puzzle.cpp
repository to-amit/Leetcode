// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
   vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
      
            vector<long long int> pro;
            long long int prod, max, maxz;
            int cnt=0;
            max=1;
            for(auto ele : nums){
                if(ele==0){
                    cnt=cnt+1;
                }
            }
            if(cnt>1){
                for(auto ele : nums){
                    pro.push_back(0);
                }
            }
           else
           {
               for(auto ele : nums){
                   if(ele!=0)
                   max=max*ele;
               }
               for(auto ele : nums){
                   if(ele==0){
                       pro.push_back(max);
                   }
                   else if(cnt==1){
                       pro.push_back(0);
                   }
                   else{
                       pro.push_back(max/ele);
                   }
               }
               
           }
           return pro;
   }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends