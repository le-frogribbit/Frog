#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter number of rows: ";
  cin >> n;
  for (int a = 1; a <= n; a++) {
    int n = 1;
    for (int b = 1; b <= a; b++) {
      cout << n << "  ";
      n++;
    }
    cout << endl;
  }
  for (int a = n - 1; a >= 1; a--) {
    int n = 1;
    for (int b = 1; b <= a; b++) {
      cout << n << "  ";
      n++;
    }
    cout << endl;
  }
  return 0;
}
