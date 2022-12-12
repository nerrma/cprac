#include <bits/stdc++.h>
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  if (s.size() < 3) {
    cout << "No\n";
    return 0;
  }

  if (!isalpha(s[0]) || !isalpha(s[s.size() - 1])) {
    cout << "No\n";
    return 0;
  }

  if (isalpha(s[1]) || s[1] - '0' <= 0) {
    cout << "No\n";
    return 0;
  }

  for (int i = 1; i < s.size() - 1; i++) {
    if (isalpha(s[i]) || s[i] - '0' > 9 || s[i] - '0' < 0) {
      cout << "No\n";
      return 0;
    }
  }

  cout << "Yes\n";
}
