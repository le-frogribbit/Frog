#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter number of rows: ";
  cin >> n;
  for (int a = 0; a < n; a++) {
    for (int c = n - 1; c > a; c--) {
      cout << " ";
    }
    int n = 1;
    for (int b = 0; b <= a; b++) {
      cout << n << " ";
      n = n * (a - b) / (b + 1);
    }
    cout << endl;
  }
  return 0;
}
