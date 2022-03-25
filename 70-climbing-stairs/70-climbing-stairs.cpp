class Solution {
public:
    // int cc(int w){
    //     if(w==0)
    //         return 1;
    //     if(w<0)
    //         return 0;
    //    return cc(w-1)+cc(w-2);
    // }
    int climbStairs(int n) {
       int arr[n+1];
        arr[0]=1;
        arr[1]=1;
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};