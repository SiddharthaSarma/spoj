#include<bits/stdc++.h>

#define endl "\n"
#define ll long long
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

map<ll, ll> dp;

ll f(ll n) {
  if (n == 0) return 0;

  if (dp[n] != 0) return dp[n];

  ll temp = f(n / 2) + f(n / 3) + f(n / 4);
  dp[n] = temp > n ? temp : n;
  return dp[n];
}

int main() {
  IOS;
  ll n;
  while (cin >> n) {
    cout << f(n) << endl;
  }
  return 0;
}
