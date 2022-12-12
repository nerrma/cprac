#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<int> A(N);

  for (auto &a : A)
    cin >> a;

  function<int(int, vector<int>)> rec = [&](int idx, vector<int> v) -> int {
    if (idx == -1)
      return 0;
    vector<int> s, t;

    for (int i = 0; i < (int)v.size(); i++) {
      if ((v[i] >> idx) & 1) {
        t.push_back(v[i]);
      } else {
        s.push_back(v[i]);
      }
    }

    if (t.size() == 0)
      return rec(idx - 1, s);
    if (s.size() == 0)
      return rec(idx - 1, t);

    return min(rec(idx - 1, s), rec(idx - 1, t)) | (1 << idx);
  };

  cout << rec(29, A) << '\n';
}
