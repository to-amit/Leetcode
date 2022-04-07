class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;
        int n =stones.size();
        for(int i=0;i<n;i++)
            max_heap.push(stones[i]);
        int f,l;
        while(max_heap.size()>=2){
            f =max_heap.top();
             max_heap.pop();
            l =max_heap.top();
             max_heap.pop();
          
            if(f-l>0){
                max_heap.push(f-l);
              
            }
        }
        if(!max_heap.empty())
            return max_heap.top();
        return 0;
    }
};