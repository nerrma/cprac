#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<ll> A(n);
  ll tot = 0;
  for (ll &a : A) {
    cin >> a;
    tot += a;
  }

  // what a smart solution
  if (n >= 4)
    cout << (ll)(n * (*max_element(A.begin(), A.end()))) << '\n';

  if (n == 2) {
    cout << max(tot, 2LL * abs(A[0] - A[1])) << '\n';
  }

  if (n == 3) {
    tot = max(tot, 3LL * abs(A[0] - A[1]));
    tot = max(tot, 3LL * abs(A[1] - A[2]));

    tot = max(tot, 3LL * A[0]);
    tot = max(tot, 3LL * A[2]);
    cout << tot << '\n';
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
