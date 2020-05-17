#include<bits/stdc++.h>

#define endl "\n"
#define ll long long
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
using namespace std;

/* method 1
const int maxN = 1e9;
void seive(vector<int>& primes) {
  vector<int> list(maxN, true);
  int sqrtMax = sqrt(maxN);
  list[0] = list[1] = false;
  for (int i = 2; i <= sqrtMax; i++) {
    if (list[i]) {
      primes.emplace_back(i);
      for (int j = i * i; j <= sqrtMax; j += i) {
        list[j] = false;
      }
    }
  }
}

int main() {
  IOS;
  vector<int> primes;
  seive(primes);
  int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    vector<bool> p(b - a + 1, true);
    for (auto i : primes) {
      if (i > sqrt(b)) break;
      int startIdx = (a + i - 1) / i;
      int j = max(startIdx, i) * i - a;
      for (; j <= b; j += i) {
        p[j] = false;
      }
    }
    for (int i = 0; i < b - a; i++) {
      if (p[i])
        cout << a + i << endl;
    }
  }
  return 0;
}
*/
vector<ll> segmentedSieve(ll L, ll R) {
  // generate all primes up to sqrt(R)
  ll lim = sqrt(R);
  vector<bool> mark(lim + 1, false);
  vector<ll> primes;
  for (ll i = 2; i <= lim; ++i) {
    if (!mark[i]) {
      primes.emplace_back(i);
      for (ll j = i * i; j <= lim; j += i)
        mark[j] = true;
    }
  }
  return primes;
}

int main() {
  IOS;
  int T;
  cin >> T;
  while (T--) {
    ll L, R;
    cin >> L >> R;
    vector<ll> primes = segmentedSieve(L, R);
    vector<bool> isPrime(R - L + 1, true);
    for (ll i : primes) {
      for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
        isPrime[j - L] = false;
      }
    }

    if (L == 1) {
      isPrime[0] = false;
    }

    for (ll i = 0; i <= R - L; i++) {
      if (isPrime[i])
        cout << L + i << endl;
    }
  }
  return 0;
}
