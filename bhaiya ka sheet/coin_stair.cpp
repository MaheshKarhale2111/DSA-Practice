#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int c = n;
  int i = 1;

  //   if (n == 0)
  //     return 0;
  //   else if (n == 1)
  //     return 1;

  while (1) {
    // cout << c << endl;
    c = c - i;
    if (c < 0) {
      break;
    }
    i++;
  }

  cout << i - 1 << endl;
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