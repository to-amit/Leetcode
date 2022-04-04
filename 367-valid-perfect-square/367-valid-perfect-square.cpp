class Solution {
public:
    bool isPerfectSquare(int num) {
       if(num==1) return true;
       long long first =1,last=num/2;
        long long ans =-1;
        
        while(first<=last){
            long long mid =first+(last-first)/2;
            if(mid*mid ==num)
                return true;
            else if(mid*mid <num)
                first=mid+1;
            else
                last=mid-1;
        }
        return false;
    }
};