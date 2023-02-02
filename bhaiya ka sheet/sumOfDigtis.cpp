#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int num) {

  if (num == 0) {
    return 0;
  }
  int sum = (num % 10) + sumofdigits(num / 10);

  return sum;
}

void solve() {
  int x;
  cin >> x;
  int sum = sumofdigits(x);
  while ((sum / 10) != 0) {
    sum = sumofdigits(sum);
  }
  cout << sum << endl;
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