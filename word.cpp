#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int n = s.length();
	int lo = 0;
	for(char c : s){
		if(islower(c)) lo++;
	}
	
	int hi = n - lo;

	string res;
	if(hi > lo){
		for(int i = 0; i < n; ++i){
			s[i] = toupper(s[i]);
		}
	} else{
		for(int i = 0; i < n; ++i){
			s[i] = tolower(s[i]);
		}
	}

	cout << s << endl;
}
