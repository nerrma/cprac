#include <bits/stdc++.h>

#define NAX 100000
using namespace std;
typedef long long ll;

int main(){
	int n, x;
	cin >> n;

	ll count[NAX+10] = { 0 };
	memset(count, 0, sizeof(count));
	
	for(int i = 0; i < n; ++i){
		cin >> x;
		count[x]++;
	}


	ll dp[NAX+10] = { 0 };
	dp[0] = 0;
	dp[1] = count[1];

	for(int i = 2; i <= NAX; i++){
		dp[i] = max(dp[i-1], dp[i-2]+count[i]*(1LL*i));
	}

	cout << dp[NAX] << endl;
	return 0;
}
