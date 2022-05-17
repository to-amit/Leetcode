class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long s = 0;
	for(auto i:chalk) s+=i;
	
	if(k>=s) k=k%s;
	int ans = -1;
        
	for(int i=0;i<chalk.size();i++){
		if(k-chalk[i]==0) {ans = i+1; break;}
		if(k-chalk[i]<0) {ans = i; break;}
		k-=chalk[i];
	}
	return ans;
    }
};