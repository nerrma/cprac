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
		
	int sz = n;

	// Loop until 2 unique elements are remaining
	while(q.size() >= 2){
		// Get maximum elements
		auto p1 = q.top();
		q.pop();
		auto p2 = q.top();
		q.pop();

		p1.first--;
		p2.first--;

		sz -= 2;

		if(p1.first){
			q.push({p1.first, p1.second});
		}
		if(p2.first){
			q.push({p2.first, p2.second});
		}
	}

	cout << sz << endl;
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
