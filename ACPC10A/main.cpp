#include <bits/stdc++.h>

#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  IOS;
  int a, b, c;
  cin >> a >> b >> c;
  while (a || b || c) {
    if ((b * b) == (a * c)) {
      cout << "GP " << (c * (c / b)) << endl;
    } else {
      cout << "AP " << (c + (c - b)) << endl;
    }
    cin >> a >> b >> c;
  }
  return 0;
}
