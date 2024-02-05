#include <bits/stdc++.h>
using namespace std;

using sc = signed char; // [-2^7, 2^7 - 1] ~ [-10^2, 10^2]
using uc = unsigned char; // [0, 2^8 - 1] ~ [0, 10^2]
using ss = signed short; // [-2^15, 2^15 - 1] ~ [-10^4, 10^4]
using us = unsigned short; // [0, 2^16 - 1] ~ [0, 10^4]
using si = signed int; // [-2^31, 2^31 - 1] ~ [-10^9, 10^9]
using ui = unsigned int; // [0, 2^32 - 1] ~ [0, 10^9]
using sll = signed long long; // [-2^63, 2^63 - 1] ~ [-10^18, 10^18]
using ull = unsigned long long; // [0, 2^64 - 1] ~ [0, 10^18]

void solve(void);

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

void solve(void) {
  us n, m; cin >> n >> m;
  string s; cin >> s;
  us res = 0, p_cur = 0, l_cur = 0;
  for (char c : s) {
    if (c == '0') {
      res = max(res, l_cur);
      p_cur = 0;
      l_cur = 0;
    } else if (c == '1') {
      if (p_cur < m) {
        p_cur++;
      } else {
        l_cur++;
      }
    } else {
      l_cur++;
    }
  }
  cout << max(res, l_cur) << "\n";
}