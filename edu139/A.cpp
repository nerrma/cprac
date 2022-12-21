#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  // multiple of 10 which also has to be divisble by 10, if ans >= 10
  int x = n / 10;
  int c = 0;
  while (x > 0) {
    x /= 10;
    c++;
  }

  int rem = n / pow(10, c);
  cout << rem + 9 * c << endl;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
