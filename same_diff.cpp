#include <bits/stdc++.h>

using namespace std;

long long nChoosek( long long n, long long k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    long long result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

void solve(vector<int> a){

	int n = a.size();
	long long cnt = 0;
	
	map<int, int> m;
	
	for(int i = 0; i < n; i++){
		m[a[i]-i]++;	
	}

	for(auto it : m){
		if(it.second > 1) cnt += nChoosek(it.second,2);
	}

	cout << cnt << endl;

}

int main(){
	int t;

	cin >> t;

	while(t){
		int n;
		vector<int> nums;

		cin >> n;
		int i;
		while(n){
			cin >> i;
			nums.push_back(i);
			n--;
		}

		solve(nums);
		t--;
	}
}
