#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  // h, p
  vector<pair<int, int>> stats(n);
  for (int i = 0; i < n; i++)
    cin >> stats[i].first;
  for (int i = 0; i < n; i++)
    cin >> stats[i].second;

  /*
  ** reduce k by p_i in every turn
  **
  ** k_i is k after we kill monster i
  **
  ** let monster i be the one with the lowest power
  **
  ** k_i = k - p_i * ((h_i + k - 1)/k), and then keep going
  * */

  sort(stats.begin(), stats.end(),
       [](auto a, auto b) { return a.second < b.second; });

  bool ok = true;
  int tot_dmg = k;
  for (int i = 0; i < n; i++) {
    auto [h, p] = stats[i];
    if (k == 0) {
      break;
    }
    if (h > 0) {
      while (tot_dmg < h) {
        k -= p;
        tot_dmg += k;

        if (k <= 0) {
          ok = false;
          break;
        }
      }
    }
  }

  if (k >= 0 && ok)
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
