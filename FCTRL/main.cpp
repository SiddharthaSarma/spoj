#include<bits/stdc++.h>

#define endl "\n"
#define ll long long
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
    ll n;
    cin >> n;

    ll k = 5;
    ll sum = 0;
    while (n >= k) {
      sum += n / k;
      k *= 5;
    }
    cout << sum << endl;
  }
  return 0;
}
