#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool non_decreasing(vector<ll> a){
	int n = a.size();
	for(int i = 1; i < n; i++){
		if(a[i] < a[i-1]) return false;
	}
	return true;
}

void solve(){
	int n;
	ll x;
	cin >> n;

	vector<ll> a;
	for(int i=0; i<n; i++){
		cin >> x;
		a.push_back(x);
	}
	
	int T = 0;
	while(!non_decreasing(a)){
		T++;

		// val, idx
		ll min_diff = INT_MAX;
		vector<int> inds;
		for(int i = 1; i < n; i++){
			if(a[i] < a[i-1]){
				if(min_diff > (a[i-1] - a[i])){
					inds = {i};
					min_diff = min(min_diff, a[i-1]-a[i]);
				} else if(min_diff == (a[i-1] - a[i])){
					inds.push_back(i);
				}
			}
		}

		for(int idx : inds){
			a[idx] += 1LL << (T-1);
		}
	}

	cout << T << endl;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}
}
