#include<bits/stdc++.h>

#define endl "\n"
#define ll long long

using namespace std;

ll binaryExponentiation(ll a, ll b) {
  ll result = 1;
  while (b  > 0) {
    if (b & 1) result = (result * a) % 10;

    a = (a * a) % 10;
    b /= 2;
  }
  return result;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a, b;
    cin >> a >> b;
    cout << binaryExponentiation(a, b) << endl;
  }
  return 0;
}
