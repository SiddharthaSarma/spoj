#include <bits/stdc++.h>

#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  IOS;
  int n;
  cin >> n;
  while (n != -1) {
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    int avg = sum / n;
    if (sum % n) {
      cout << -1 << endl;
    } else {
      int count = 0;
      for (auto i : a) {
        if (i > avg)
          count += i - avg;
      }
      cout << count << endl;
    }
    cin >> n;
  }
  return 0;
}
