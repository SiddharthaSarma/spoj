#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 0;
  cin >> n;
  while (n) {
    string s;
    cin >> s;
    int len = s.size();
    string res;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < len / n; j++) {
        if (j & 1) {
          int k = ((j + 1) * n - i - 1);
          res += s[k];
        } else {
          res += s[i + (j * n)];
        }
      }
    }
    cout << res << endl;
    cin >> n;
  }
  return 0;
}
