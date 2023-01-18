#include <bits/stdc++.h>
#include <unordered_map>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<vector<int>> a(n);
  map<int, int> occ;
  int k;
  int p;
  for (int i = 0; i < n; i++) {
    cin >> k;
    for (int j = 0; j < k; j++) {
      cin >> p;
      occ[p]++;
    }
  }

  for (auto [k, v] : occ) {
    if (v != 1) {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
