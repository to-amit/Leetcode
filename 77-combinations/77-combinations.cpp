class Solution {
public:
  void powerset(int val, int n, int k, vector<int>& present, vector<vector<int>> &ans) {
	if(k == present.size()) {
		ans.push_back(present);
		return;
	}

	if(val > n){
		return;
	}

	powerset(val+1, n, k, present, ans);
	present.push_back(val);
	powerset(val+1, n, k, present, ans);
	present.pop_back();
}

vector<vector<int>> combine(int n, int k) {

	vector<vector<int>> ans;
	vector<int> present;
	powerset(1, n, k, present, ans);
	return ans;
}
};