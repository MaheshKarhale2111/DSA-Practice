#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  double num;
  num = log(n) / log(3);

  if (abs(num - round(num)) <= 0.00000001) {
      cout << "true" << endl;
    // return true;
  }
  cout << "false" << endl;
//   return false;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}