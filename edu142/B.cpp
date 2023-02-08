#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {

  int a_1, a_2, a_3, a_4;
  cin >> a_1 >> a_2 >> a_3 >> a_4;
  int tot = a_1 + a_2 + a_3 + a_4;

  int ans = a_1;

  if (a_1 > 0) {
    int mn = min(a_2, a_3);
    ans += 2 * mn;

    a_2 -= mn;
    a_3 -= mn;
  }

  a_2 = min(a_1, a_2);
  a_3 = min(a_1, a_3);
  ans += a_2 + a_3;

  a_4 = min({a_4, a_1 - a_2, a_1 - a_3});
  ans += a_4;

  cout << min(ans + 1, tot) << '\n';
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
