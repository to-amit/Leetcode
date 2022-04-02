class Solution {
public:
   public: bool isPalid(string s,int start,int end){
    while(start<end){
        if(s[start]!=s[end])
            return false;
        start++;
        end--;
    }
    return true;
}
    
    bool validPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
           while(start<end){
               if(s[start]==s[end]){    
               start++;
               end--;
              }
               else{
                   if(isPalid(s,start+1,end) || isPalid(s,start,end-1))
                       return true;
                   
                   return false;
               }
           }
        
        return true;
    }
};