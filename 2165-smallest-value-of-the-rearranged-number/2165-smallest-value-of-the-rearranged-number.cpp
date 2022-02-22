class Solution {
public:
    long long smallestNumber(long long n) {
         
        
         if(n>0){
            vector<int>arr;
           long long sum =0;
            while(n>0){
                arr.push_back(n%10);
                n/=10;
                
            }
            //sort in increasing order for +ve num
            sort(arr.begin(),arr.end());
                if(!arr[0]){
                    for(long long i=0;i<arr.size();i++){
                        if(arr[i]){
                           swap(arr[i],arr[0]);
                            break;

                        }

                    }
                }
                long long n= arr.size();
                for(long long i=0;i<arr.size();i++){
                    sum=sum*10+arr[i];

                }
               return sum;
        }
             
        
        else if(n<0){
            n =n*(-1);
            cout<<n<<endl;
            vector<int>arr;
            while(n>0){
                arr.push_back(n%10);
                n/=10;
            }
            sort(arr.begin(),arr.end());
            reverse(arr.begin(),arr.end());
            long long ans =0;
            for(auto it:arr)
                ans =ans*10+it;
            return -ans;
        }
        return 0;
    }
};