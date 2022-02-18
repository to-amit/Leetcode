// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
      void check(int idx,string digits,string temp,vector<string> &ans,vector<string>& dict){
        if(idx==digits.size()){ //possible answer
            ans.push_back(temp);
            return;
        }     
        string curr_string=dict[digits[idx]-'0'];  
        for(int i=0;i<curr_string.size();i++){       
            temp+=curr_string[i];
            check(idx+1,digits,temp,ans,dict);  
            temp.pop_back(); 
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        string digits ="";
        for(int i=0;i<N;i++){
            digits+=to_string(a[i]); 
        }
        if(N==0) return {};
        vector<string> dict={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
        vector<string> ans; 
        string temp;
        int idx=0;  
        check(idx,digits,temp,ans,dict); //Time complexity o(n*4^n)
        return ans;
        
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends