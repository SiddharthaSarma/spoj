#include <bits/stdc++.h>

#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int count = 0;
    for (int i = 0; i < n; i++) {
      count += a[i] * b[i];
    }
    cout << count << endl;
  }
  return 0;
}
