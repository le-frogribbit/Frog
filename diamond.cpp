#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "a.Filled diamond\nb.Empty diamond" << endl;
  char ef;
  cin >> ef;
  cout << "How big should the diamond be" << endl;
  int si;
  cin >> si;
  int si2 = si / 2;
  int k = -1;
  int l = si - 1;
  if (ef == 'a') {
    for (int a = 1; a <= si2; a++) {
      k = k + 2;
      for (int e = si2; e >= a; e--) {
        cout << " ";
      }
      for (int b = 1; b <= k; b++) {
        cout << "*";
      }
      cout << endl;
    }
    if (si % 2 != 0) {
      l--;
    }
    for (int c = si2 - 1; c >= 1; c--) {
      l = l - 2;
      for (int f = si2; f >= c; f--) {
        cout << " ";
      }
      for (int d = l; d >= 1; d--) {
        cout << "*";
      }
      cout << endl;
    }
  } else if (ef == 'b') {
    for (int a = 1; a <= si2; a++) {
      for (int e = si2; e >= a; e--) {
        cout << " ";
      }
      for (int b = 1; b <= a; b++) {
        if (b == 1 || b == a) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
      cout << endl;
    }
    for (int c = si2 - 1; c >= 1; c--) {
      for (int f = si2 - 1; f >= c; f--) {
        cout << " ";
      }
      for (int d = 1; d <= c; d++) {
        if (d == 1 || d == c) {
          cout << " *";
        } else {
          cout << "  ";
        }
      }
      cout << endl;
    }
  } else {
    cout << "Wrong Input" << endl;
  }
  return 0;
}
