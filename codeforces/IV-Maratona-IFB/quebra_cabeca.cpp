#include <bits/stdc++.h>
using namespace std;
using mci = map<char, int>;

int main () {

  string in;
  int even = 0, one = 0;
  mci ans;
  cin >> in;
  for (size_t i = 0; i < in.size(); i++) {
    ans[in[i]]++;
  }
  if (in.size() % 2 == 0) {
    for (auto elem : ans) {
      if (elem.second % 2 == 0) {
        even++;
      }
    }
    if (even == ans.size()) {
      cout << "Sim" << endl;
    }
    else {
      cout << "Nao" << endl;
    }
  }
  else {
    even = 0;
    for (auto elem : ans) {
      if (elem.second % 2 != 0) {
        one++;
      }
    }
    if (one == 1) {
      cout << "Sim" << endl;
    }
    else {
      cout << "Nao" << endl;
    }
  }

  return 0;
}
