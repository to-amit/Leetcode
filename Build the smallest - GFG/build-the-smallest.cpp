// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends

string lowestNumber(string num, int k){
    if(k==0) return num;
    int i=0;
    for(i=0;i<num.length()-1;i++){
        if(num[i]-'0' >num[i+1]-'0')break;
    }
    if(num.length()>0 ) num.erase(num.begin()+i);
    //check for leading 0
    while(num.size()>1 && num[0]=='0')num.erase(num.begin());
    if(num.size()==0) num="0";
    return lowestNumber(num,k-1);
}
string buildLowestNumber(string num, int k)
{
    return lowestNumber(num,k);
}