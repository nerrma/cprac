#include <bits/stdc++.h>

using namespace std;

#define EMPTY '.'
#define SHEEP '*'

void solve(string s, int n){
	int pref[n+1] = { 0 };

	for(int i = 1; i <= n; i++){
		pref[i] = pref[i-1] + (s[i-1] == SHEEP ? 1 : 0);
	}


	long long res = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == SHEEP) continue;
		res += min(pref[i], pref[n]-pref[i]);
	}

	cout << res << endl;
}

int main(){
	int t, n;
	string s;

	cin >> t;

	while(t){
		cin >> n;
		cin >> s;

		solve(s, n);
		t--;
	}
}
