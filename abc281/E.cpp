#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<ll, int>, null_type, less<pair<ll, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    map_t;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M, K;
  cin >> N >> M >> K;

  vector<int> A(N);
  for (int &a : A)
    cin >> a;

  // sliding window?
  // need a structure to dynamically track first k in range
  // initial sort, keep track of maximum k
  ll tot = 0;
  map_t st;
  for (int i = 0; i < M; i++) {
    st.insert({A[i], i});
  }

  for (int i = 0; i < K; i++) {
    tot += (*st.find_by_order(i)).first;
  }

  cout << tot << ' ';
  int l = 0, r = M;
  while (r < N) {
    ll kth = (*st.find_by_order(K - 1)).first;
    st.erase({A[l], l});
    st.insert({A[r], r});

    if (A[l] <= kth && A[r] <= kth) {
      tot -= A[l];
      tot += A[r];
    } else if (A[r] <= kth) {
      tot -= kth;
      tot += A[r];
    } else if (A[l] <= kth) {
      tot -= A[l];
      tot += (*st.find_by_order(K - 1)).first;
    }

    l++;
    r++;

    cout << tot << " ";
  }

  cout << '\n';
}
