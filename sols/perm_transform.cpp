#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> a, int n, int dep){
	
	if(a.empty()) return {};

	// val, idx
	pair<int, int> a_mx = make_pair(-1, -1);

	for(int i = 0; i<n; i++){
		if(a[i] > a_mx.first){
			a_mx.first = a[i];
			a_mx.second = i;
		}
	}

	vector<int> right_half;
	for(int i = a_mx.second+1; i < n; i++){
		right_half.push_back(a[i]);
	}
	
	vector<int> left_half;
	for(int i = 0; i < a_mx.second; i++){
		left_half.push_back(a[i]);
	}
	
	vector<int> ans = { dep };

	vector<int> res = solve(right_half, right_half.size(), dep+1);
	ans.insert(ans.end(), res.begin(), res.end());

	vector<int> res2 = solve(left_half, left_half.size(), dep+1);
	ans.insert(ans.begin(), res2.begin(), res2.end());

	return ans;
}

int main(){
	int t;
	cin >> t;

	while(t){
		int n, x;
		vector<int> a;
		
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> x;
			a.push_back(x);
		}

		vector<int> res = solve(a, n, 0);

		for(int e : res){
			cout << e << " ";
		}
		cout << endl;
		t--;
	}
}
