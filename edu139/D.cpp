#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

const int INF = 1e9 + 7;
const int MAXN = 1e7 + 5;

// minimum divisor
int mdiv[MAXN];

void sieve() {
  for (int i = 0; i < MAXN; i++)
    mdiv[i] = i;

  for (int p = 2; p < MAXN; p++) {
    // if we've already calculated a min divisor, skip it as it is a multiple of
    // an earlier divisor this also ensures we only propagate prime divisors
    if (mdiv[p] != p)
      continue;

    // for every multiple of p, check if p is the minimum divisor
    for (int m = 2 * p; m < MAXN; m += p) {
      mdiv[m] = min(mdiv[m], p);
    }
  }
}

vector<int> factorize(int n) {
  vector<int> fac;
  while (n > 1) {
    if (fac.empty() || fac.back() != mdiv[n])
      fac.push_back(mdiv[n]);
    n /= mdiv[n];
  }

  return fac;
}

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
  if (y - x == 1) {
    cout << -1 << '\n';
    return;
  }

  auto facs = factorize(y - x);

  // find the minimum factor which is greater than x
  int up = INF;
  for (int d : facs) {
    int f = (x + d - 1) / d; // ceil factor
    up = min(d * f, up);
  }

  cout << up - x << '\n';
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  sieve();

  int n;
  cin >> n;
  while (n--)
    solve();
}
