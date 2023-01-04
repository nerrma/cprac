#include <bits/stdc++.h>
#include <vector>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  const int n = 2;
  vector<vector<int>> A(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> A[i][j];
    }
  }

  /*
   * ab  ca  dc  bd
   * cd  db  ba  ac
   * */

  bool ok = false;

  int a = A[0][0];
  int b = A[0][1];
  int c = A[1][0];
  int d = A[1][1];

  if ((a < b) && (a < c) && (b < d) && (c < d))
    ok = true;

  if ((c < a) && (c < d) && (a < b) && (d < b))
    ok = true;

  if ((d < c) && (d < b) && (b < a) && (c < a))
    ok = true;

  if ((b < d) && (b < a) && (d < c) && (a < c))
    ok = true;

  if (ok)
    cout << "YES\n";
  else
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
