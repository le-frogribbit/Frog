#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "Enter number of rows(odd number only)" << endl;
  int n;
  cin >> n;
  int m = 3 * n;
  m = (m - 3) / 2;
  int m2 = m, m3 = 0, m4 = 0, k = 1, k2 = 1;
  for (int a = 1; a <= n / 2; a++) {
    for (int b = 1; b <= m; b++) {
      cout << "-";
    }
    m -= 3;
    for (int c = 1; c <= k; c++) {
      cout << ".|.";
    }
    k += 2;
    for (int b = 1; b <= m2; b++) {
      cout << "-";
    }
    m2 -= 3;
    cout << endl;
  }
  for (int a = 1; a <= (n * 3 - 7) / 2; a++) {
    cout << "-";
  }
  cout << "Welcome";
  for (int a = 1; a <= (n * 3 - 7) / 2; a++) {
    cout << "-";
  }
  cout << endl;
  for (int a = n / 2; a > 0; a--) {
    m3 += 3;
    for (int b = 1; b <= m3; b++) {
      cout << "-";
    }
    k -= 2;
    for (int c = k; c > 0; c--) {
      cout << ".|.";
    }
    m4 += 3;
    for (int b = 1; b <= m4; b++) {
      cout << "-";
    }
    cout << endl;
  }
  return 0;
}
