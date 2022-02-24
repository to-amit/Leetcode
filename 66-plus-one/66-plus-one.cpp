class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
        
        reverse(A.begin(),A.end());
        //3 2 1
        int carry =1;
        for(int i=0;i<A.size();i++){
            int x =carry+A[i];
            carry =x/10;
            x =x%10;
            A[i]=x;
        }
        if(carry==1)
            A.push_back(carry);
        reverse(A.begin(),A.end());
        return A;
        
    }
};