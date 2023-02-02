// https://leetcode.com/problems/valid-palindrome/
// date 31 Jan 2023 - source - bhaiya ki advance sheet

#include <bits/stdc++.h>
using namespace std;

bool validAlpha(int a) {
  if ((a <= 57 && a >= 48) || (a <= 90 && a >= 65) || (a <= 122 && a >= 97)) {

    return true;
  }
  return false;
}

bool solve() {

    
  string s;
 getline(cin>>ws, s);
//   cin>>s;
vector<char> vec1;
  vector<char> vec2;
  for (int i = 0; i < s.size(); i++) {
    if (validAlpha(int(s[i]))) {
      vec1.push_back(tolower(s[i]));
      vec2.insert(vec2.begin(), tolower(s[i]));
    }
  }

  for (int i = 0; i < vec1.size(); i++) {
    if (vec1[i] != vec2[i]) {
      cout << "error" << endl;
        return false;
    }
  }

  cout << "fine" << endl;
//   cout << size(s) << endl;
//   for (auto i : vec1) {
//     cout << i << endl;
//   }
//   for (auto i : vec2) {
//     cout << i << endl;
//   }
  
  return true;
}
int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
