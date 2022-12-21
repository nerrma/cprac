#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int m;
  cin >> m;

  vector<string> grid(2);
  cin >> grid[0] >> grid[1];

  vector<array<bool, 2>> dp(m);

  dp[0][0] = grid[0][0] == 'B';
  dp[0][1] = grid[1][0] == 'B';

  for (int i = 1; i < m; i++) {
    if (grid[0][i] == 'B' && grid[1][i] == 'B') {
      dp[i][0] = dp[i - 1][1];
      dp[i][1] = dp[i - 1][0];
    } else if (grid[0][i] == 'B') {
      dp[i][0] = dp[i - 1][0];
    } else {
      dp[i][1] = dp[i - 1][1];
    }
  }

  cout << (dp[m - 1][0] || dp[m - 1][1] ? "YES\n" : "NO\n");
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
