#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  string s;
  cin >> s;

  // make b just one letter, if b = 'b', then make c the last two letters
  int n = s.size();

  int pos = 0;
  for (int i = 1; i < n - 1; i++) {
    if (s[i] == 'a') {
      pos = i;
      break;
    }
  }

  if (pos) {
    cout << s.substr(0, pos) << " " << s[pos] << " " << s.substr(pos + 1)
         << endl;
  } else {
    cout << s[0] << " " << s.substr(1, n - 2) << " " << s[n - 1] << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
