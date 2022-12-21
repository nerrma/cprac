#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;

  if (__gcd(x, y) != 1) {
    cout << 0 << '\n';
    return;
  }

  /*
  ** if the two numbers are consecutive, the chain is infinite
  */
  if (abs(x - y) == 1) {
    cout << -1 << '\n';
    return;
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  while (n--)
    solve();
}
