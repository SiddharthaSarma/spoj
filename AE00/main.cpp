#include <bits/stdc++.h>

using namespace std;

int nof(int n) {
  int nf = 1;
  int sr = sqrt(n);
  for (int i = 2; i <= sr; i++) {
    if (n % i == 0) {
      nf++;
    }
  }
  return nf;
}

int main() {
  int n;
  while (cin >> n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
      count += nof(i);
    }
    cout << count << endl;
  }
  return 0;
}
