#include <bits/stdc++.h>

using namespace std;

void solve(const int x){
	
	vector<int> digs;

	int n = x;
	while(n){
		digs.push_back(n % 10);
		n = n/10;
	}

	// state, 0 - upset, 1 - happy, 2 - happier
	int state = 0;
	int c = 0;
	for(auto e : digs){
		if((x % e) == 0){
			state = 1;
			c++;
		}
	}

	if(c == (int)digs.size()) state = 2;

	switch(state){
		case 0:
			cout << "upset" << endl;
			break;
		case 1:
			cout << "happy" << endl;
			break;
		case 2:
			cout << "happier" << endl;
			break;
	}

}

int main(){
	int x;
	
	cin >> x;

	solve(x);
}
