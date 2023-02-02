#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long int n;
  cin >> n;

  vector<int> vec;
  while (n % 2 == 0) {
    n = n / 2;
    vec.push_back(2);
  }

  // n is odd now

  for (long long int i = 3; i <= sqrt(n); i++) {
    while (n % i == 0) {
        vec.push_back(i);
      if (i != 3 && i != 5) {
        // cout<<"ERROR1"<<endl;
        // return false;
      }
      n = n / i;
    }
  }
  if (n > 2) {
    if (n != 3 && n != 5) {
        // cout<<"ERROR"<<endl;
    //   return false;
    }
    vec.push_back(n);
  }

    for (auto i : vec) {
      cout << i << endl;
    }
    // cout<<vec.size()<<endl;
//   cout<<"fine"<<endl;
//   return true;
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