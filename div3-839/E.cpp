#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int &ai : a)
    cin >> ai;

  int nf = 0, ns = 0;
  int tot = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != i + 1 && a[i] != n - i) {
      tot++;
    }
    if (a[i] != i + 1) {
      nf++;
    }
    if (a[i] != n - i) {
      ns++;
    }
  }

  if (nf + tot <= ns)
    cout << "First\n";
  else if (ns + tot < nf)
    cout << "Second\n";
  else
    cout << "Tie\n";
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int tt;
  cin >> tt;
  while (tt--)
    solve();
}
