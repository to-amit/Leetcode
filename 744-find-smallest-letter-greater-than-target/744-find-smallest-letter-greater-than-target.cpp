class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(target >=letters[n-1])
            return letters[0];
        int l=0,r=n-1;
        char ans;
        while(l<=r){
            int mid=(l+r)/2;
            if(letters[mid]<=target){
                l=mid+1;
            }
          
            else{
                 ans=letters[mid];
                  r=mid-1;
            }
              
            
                
        }
        
        
       return ans;
        
    }
};