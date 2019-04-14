#include <bits/stdc++.h>
using namespace std;
using sc = set<char>;

bool ans (string a) {
  sc test;
  for (size_t i = 0; i < a.size(); i++) {
    test.insert(a[i]);
  }
  if (test.size() == a.size()) {
    return false;
  }
  else {
    return true;
  }
}

int main () {

  string in;
  bool correct;
  int a;
  cin >> in;
  a = stoi(in);
  a += 1;
  in = to_string(a);
  while (true) {
    correct = ans(in);
    if (correct == false) {
      break;
    }
    else{
      a = stoi(in);
      a += 1;
      in = to_string(a);
    }
  }
  cout << in << endl;
  return 0;
}
