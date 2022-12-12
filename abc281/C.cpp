#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  ll t;
  cin >> n >> t;

  vector<int> A(n);
  ll tot = 0;
  for (int &a : A) {
    cin >> a;
    tot += a;
  }

  ll pos = t % tot;
  ll dist = t % tot;
  ll cur_sum = 0;
  int idx = 0;
  for (int a : A) {
    idx++;
    cur_sum += a;
    if (cur_sum >= pos) {
      break;
    } else {
      dist -= a;
    }
  }
  cout << idx << " " << dist << endl;
}
