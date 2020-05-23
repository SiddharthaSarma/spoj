#include<bits/stdc++.h>

#define endl "\n"
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
    stack<char> s1;
    stack<char> s2;
    string s;
    cin >> s;
    string res;
    string ops = "+-*/^";
    for (char c : s) {
      if (c == '(') {
        s1.push('(');
        continue;
      }
      if (c == ')') {
        res += s2.top();
        s2.pop();
        s1.pop();
        continue;
      }
      if (ops.find(c) != string::npos) {
        s2.push(c);
        continue;
      }
      res += c;
    }
    cout << res << endl;
  }
  return 0;
}
