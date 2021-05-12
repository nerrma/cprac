#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){
	for(int i = 2; i < n; i++){
		if(n%i == 0) return false;
	}

	return true;
}

int main(){
	int x;
	cin >> x;
	
	int diff = 0;
	for(int i = x; i > 1; i--){
		diff = x - i;
		if(!is_prime(i) && !is_prime(diff)) break;
	}

	printf("%d %d\n", diff, (x - diff));
	return 0;
}
