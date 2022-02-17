class Solution {
public:
    int nextGreaterElement(int n) {
     
        vector<int> nums;
        
        while (n!=0){
            nums.push_back(n%10);
            n=n/10;
        }
        
        reverse(nums.begin(),nums.end());
          
        // THIS IS SAME AS NEXT PERMUTATION
        
          int size=nums.size();
          int index=-1;
        
        for(int i=size-2;i>=0;i--){
            
            if(nums[i] < nums[i+1])
            {
                index=i;
                break;
            }
        }
        
        if(index==-1) return index;
        
        int number=0;
        
        for(int i=index+1;i<nums.size();i++)
        {
            if(nums[i] > nums[index])
            {
                number=i;
            }
        }
        
        swap(nums[index],nums[number]);
        reverse(nums.begin()+index+1,nums.end());
       
        
        long long int res=0;
        
        for (int i=0;i<size;i++){
            res=res*10+nums[i];
        }
        
        if (res>INT_MAX) return -1;
        return res;
        
    }
};