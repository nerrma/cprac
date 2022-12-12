#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

template <typename T> void max_self(T &a, T b) { a = max(a, b); }

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // s be the set of non-negative integers that can be the sum of k terms in A
  int N, K, D;
  cin >> N >> K >> D;

  vector<int> A(N);
  for (int &a : A) {
    cin >> a;
  }

  vector<vector<vector<ll>>> dp(N + 1,
                                vector<vector<ll>>(K + 1, vector<ll>(D, -1)));
  dp[0][0][0] = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K + 1; j++) {
      for (int k = 0; k < D; k++) {
        if (dp[i][j][k] == -1)
          continue;

        max_self(dp[i + 1][j][k], dp[i][j][k]);

        if (j != K) {
          max_self(dp[i + 1][j + 1][(k + A[i]) % D], dp[i][j][k] + A[i]);
        }
      }
    }
  }

  cout << dp[N][K][0] << endl;
}
