#include <bits/stdc++.h>
using namespace std;

void solve() {}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  getline(cin, s);
  cout << s << endl;
  return 0;
}

vector<char> vec1;
  vector<char> vec2;
  for (int i = 0; i < s.size(); i++) {
    if (validAlpha(int(s[i]))) {
      vec1.push_back(s[i]);
      vec2.insert(vec2.begin(), s[i]);
    }
  }

  for (int i = 0; i < vec1.size(); i++) {
    if (vec1[i] != vec2[i]) {
      cout << "error" << endl;
      //   return false;
    }
  }

  cout << "fine" << endl;
  cout << size(s) << endl;
  for (auto i : vec1) {
    cout << i << endl;
  }
  // for (auto i : vec2) {
  //   cout << i << endl;
  // }