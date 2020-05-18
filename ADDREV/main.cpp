#include<bits/stdc++.h>

#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
using namespace std;

int reverse(int n) {
  int reverse = 0;
  while (n) {
    reverse *= 10;
    reverse += n % 10;
    n /= 10;
  }
  return reverse;
}

int main() {
  IOS;
  int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    cout << reverse(reverse(a) + reverse(b)) << endl;
  }
  return 0;
}
