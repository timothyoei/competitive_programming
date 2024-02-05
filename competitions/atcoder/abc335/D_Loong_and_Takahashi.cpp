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
  si n; cin >> n;
  vector<vector<si>> a(n, vector<si>(n, 0));
  si xStart = 0, xEnd = n - 1, yStart = 0, yEnd = n - 1;
  for (si b = 1; b < n * n; ) {
    if (a[yStart][xStart] != 0) {
      break;
    }
    for (si x = xStart; x <= xEnd; x++) {
      a[yStart][x] = b++;
    }
    yStart++;

    if (a[yStart][xEnd] != 0) {
      break;
    }
    for (si y = yStart; y <= yEnd; y++) {
      a[y][xEnd] = b++;
    }
    xEnd--;

    if (a[yEnd][xEnd] != 0) {
      break;
    }
    for (si x = xEnd; x >= xStart; x--) {
      a[yEnd][x] = b++;
    }
    yEnd--;

    if (a[yEnd][xStart] != 0) {
      break;
    }
    for (si y = yEnd; y >= yStart; y--) {
      a[y][xStart] = b++;
    }
    xStart++;
  }

  for (si i = 0; i < n; i++) {
    for (si j = 0; j < n - 1; j++) {
      if (i == n / 2 && j == n / 2) {
        cout << "T ";
      } else {
        cout << a[i][j] << " ";
      }
    }
    cout << a[i][n - 1] << "\n";
  }
}