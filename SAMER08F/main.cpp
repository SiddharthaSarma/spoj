#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  IOS;
  ll n;
  cin >> n;
  while (n) {
    cout << ((2 * n + 1) * (n + 1) * n) / 6 << endl;
    cin >> n;
  }
  return 0;
}
