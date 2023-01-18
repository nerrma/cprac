#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

const int MOD = 1e9 + 7;

int madd(int a, int b) { return ((a + b) % MOD + MOD) % MOD; }

void solve() {
  int n, i, j, x, y;
  cin >> n >> i >> j >> x >> y;

  vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
  dp[0][n] = 1;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
