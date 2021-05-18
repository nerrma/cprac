#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(map<pair<pair<int, int>, pair<int, int>>, int> edges, int n, int m, int k){
	
	vector<vector<int>> ans(n, vector<int>(m));
	
	if((k%2) != 0) {
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				ans[i][j] = -1;
			}
		}
		return ans;
	}

	vector<vector<int>> dp(n, vector<int>(k));
	
	return ans;
}

int main(){
	int n, m, k;
	
	cin >> n >> m >> k;

	map<pair<pair<int, int>, pair<int, int>>, int> edges;
	int x;
	for(int i = 0; i < n; i++){
		for(int j = 1; j < m; j++){
			cin >> x;
			pair<int, int> p1 = make_pair(i, j);
			pair<int, int> p2 = make_pair(i, j+1);
			edges[make_pair(p1, p2)] = x;
		}
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = 1; j <= m; j++){
			cin >> x;
			pair<int, int> p1 = make_pair(i, j);
			pair<int, int> p2 = make_pair(i+1, j);
			edges[make_pair(p1, p2)] = x;
		}
	}

}
