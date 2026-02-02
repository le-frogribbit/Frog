#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "How Many Rows?" << endl;
  int x;
  cin >> x;
  int k = x * 2;
  for (int a = 1; a <= x; a++) {
    int m = 1;
    int n = a;
    k = k - 2;
    for (int b = 1; b <= a; b++) {
      cout << m;
      m++;
    }
    for (int c = 1; c <= k; c++) {
      cout << " ";
    }
    for (int c = 1; c <= a; c++) {
      cout << n;
      n--;
    }
    cout << endl;
  }
  return 0;
}
