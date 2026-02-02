#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "How many rows" << endl;
  int r;
  cin >> r;
  for (int a = 0; a < r; a++) {
    for (int b = r; b > a; b--) {
      cout << " ";
    }
    int n = 0;
    for (int c = 0; c <= a; c++) {
      n = n + 1;
      cout << n << " ";
    }
    cout << endl;
  }
  return 0;
}
