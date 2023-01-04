#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n, k;
  cin >> k >> n;

  /*
  ** if there are k-i spots left to fill and we are at c, with jump j
  ** n-c < k-i,
  */

  int curr = 0, jump = 0;
  for (int i = 0; i < k; i++) {
    if (n - (curr + jump) <= k - i - 1)
      jump = 1;
    else
      jump++;

    curr = curr + jump;
    cout << curr << ' ';
  }

  cout << '\n';
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
