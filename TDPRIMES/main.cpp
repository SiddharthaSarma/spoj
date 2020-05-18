#include<bits/stdc++.h>

#define endl "\n"
#define ll long long
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

const ll maxN = 1e8;

void sieve(vector<ll>& a) {
  vector<bool> primes(maxN, true);  primes[0] = primes[1] = false;

  // set all even numbers to false
  for (ll i = 4; i <= maxN; i += 2) {
    primes[i] = false;
  }

  // loop over the odd values and set them to false
  for (ll i = 3; i * i <= maxN; i += 2) {
    if (primes[i]) {
      for (ll j = i * i; j <= maxN; j += 2 * i) {
        primes[j] = false;
      }
    }
  }
  a.emplace_back(2);
  for (ll i = 3; i <= maxN; i += 2) {
    if (primes[i]) {
      a.emplace_back(i);
    }
  }
}

int main() {
  IOS;
  vector<ll> a;
  sieve(a);
  signed length = a.size();
  for (ll i = 0; i <= length; i += 100) {
    cout << a[i] << endl;
  }
  return 0;
}
