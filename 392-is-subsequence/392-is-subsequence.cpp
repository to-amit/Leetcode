class Solution {
public:
    bool isSubsequence(string A, string B) {
         int k=0;
        int count=0;
        for(int i=0;i<B.size();i++){
            if(A[k]==B[i]){
                k++;
                count++;
            }
        }
        if(count==A.size()){
            return 1;
        }
        return 0;
    }
};