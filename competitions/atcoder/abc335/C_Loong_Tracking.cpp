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
  si n, q; cin >> n >> q;
  deque<pair<si, si>> m;
  for (si i = 1; i <= n; i++) {
    m.push_back(make_pair(i, 0));
  }
  for (si i = 0; i < q; i++) {
    ui a; cin >> a;
    if (a == 1) {
      uc c; cin >> c;
      if (c == 'R' || c == 'L') {
        m.push_front(make_pair(m.front().first + (c == 'R' ? 1 : -1), m.front().second));
      } else {
        m.push_front(make_pair(m.front().first, m.front().second + (c == 'U' ? 1 : -1)));
      }
      m.pop_back();
    } else {
      ui p; cin >> p;
      cout << m[p - 1].first << " " << m[p - 1].second << "\n";
    }
  }
}