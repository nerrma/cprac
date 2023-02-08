#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> inv(n + 1);
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    inv[x] = i;
  }

  int ans = (n + 1) / 2;
  int l = (n + 1) / 2;
  int r = (n + 2) / 2;

  while (l >= 1 && (l == r || (inv[l] < inv[l + 1] && inv[r - 1] < inv[r]))) {
    l--;
    r++;
    ans--;
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
