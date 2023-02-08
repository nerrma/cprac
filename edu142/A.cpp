#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  int a;
  int num_1 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;

    if (a == 1)
      num_1++;
  }

  cout << (n - (num_1 / 2)) << '\n';
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
