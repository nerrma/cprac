#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  // if there is a repeated substring of length > 1, we can do it in less than n
  // operations

  map<pair<char, char>, int> m;
  string ans = "NO";
  for (int i = 0; i < n - 1; i++) {
    pair<char, char> sbs = {s[i], s[i + 1]};
    if (m.count(sbs) == 0) {
      m[sbs] = i;
    } else if (i >= m[sbs] + 2) {
      ans = "YES";
    }
  }

  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
