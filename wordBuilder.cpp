#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "A";
  string s1 = "";
  string h;
  getline(cin, h);
  for (int a = 0; a <= h.length() - 1; a++) {
    char c = 'A';
    for (int b = 0; b < 1;) {
      if (h[a] == ' ') {
        s1 = s1 + " ";
        break;
      }
      s = string(1, c);
      this_thread::sleep_for(chrono::milliseconds(30));
      cout << s1 + s << endl;
      if (c == h[a]) {
        s1 = s1 + s;
        break;
      }
      int k = (int)c;
      k++;
      c = (char)k;
    }
  }
  return 0;
}
