#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> A(n);
  for (int &a : A)
    cin >> a;

  int land = A[0];
  int lor = A[0];
  for (int i = 0; i < n; i++) {
    land &= A[i];
    lor |= A[i];
  }

  int ans = lor - land;
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
