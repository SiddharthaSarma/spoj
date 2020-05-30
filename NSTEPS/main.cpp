#include <bits/stdc++.h>

#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  IOS;
  int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    int sum;
    if (a != b && a - b != 2) {
      cout << "No Number" << endl;
      continue;
    }
    if (a & 1 && b & 1) {
      sum = a + b - 1;
    } else if (!(a & 1) && !(b & 1)) {
      sum = a + b;
    }
    cout << sum << endl;
  }
  return 0;
}
