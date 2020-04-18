#include<bits/stdc++.h>

using namespace std;

bool a[90000001];
vector<int> v;

void seive() {
  int maxN = 90000000;
  a[0] = a[1] = true;
  for (int i = 2; i * i <= maxN; i++) {
    if (!a[i]) {
      for (int j = i * i; j <= maxN; j += i) {
        a[j] = true;
      }
    }
  }
  
  // setting elements
  for (int i = 2; i <= maxN; i++) {
    if (!a[i]) v.push_back(i);
  }
}

int main() {
  seive();
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    cout << v[n - 1] << "\n";
  }
  return 0;
}
