#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

const int INF = 1e9 + 7;

void solve() {
  int n;
  cin >> n;

  vector<int> A(n);
  for (int &a : A)
    cin >> a;

  int mn = 0, mx = INF;
  for (int i = 0; i < n - 1; i++) {
    int hi = (A[i] + A[i + 1] + 1) / 2;
    int lo = (A[i] + A[i + 1]) / 2;

    // minimum upper bound and maximum lower bound
    if (A[i] < A[i + 1])
      mx = min(mx, lo);
    if (A[i] > A[i + 1])
      mn = max(mn, hi);
  }

  if (mn <= mx)
    cout << mn << '\n';
  else
    cout << "-1\n";
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
