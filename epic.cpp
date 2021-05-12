#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> a, int n){
	priority_queue<pair<int, int>> q;
	map<int, int> counts;

	for(auto e: a){
		counts[e]++;
	}

	//Add to priority queue with counts first 
	for(auto e: counts){
		q.push({e.second, e.first});
	}

	for(auto e1: counts){
		for(auto e2: counts){
			if(e1.first != e2.first && e1.second && e2.second){
					counts[e1.first]--;
					counts[e2.first]--;
			}
		}
	}

	int ans = 0;
	for(auto e: counts){
		ans += e.second;
	}

	cout << ans << endl;
}

int main(){
	int t;

	cin >> t;

	while(t--){
		int n;
		vector<int> a;

		cin >> n;

		int e;
		for(int i =0; i<n; ++i){
			cin >> e;
			a.push_back(e);
		}
		solve(a, n);
	}

}
