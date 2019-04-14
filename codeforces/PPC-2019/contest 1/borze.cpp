#include <bits/stdc++.h>
using namespace std;

int main () {
  string in;
  cin >> in;
  int pos = 0, aux = 0;
  while (pos != in.size()) {
    if (in[pos] == '.') {
      cout << "0";
      pos++;
    }
    else {
      aux = pos + 1;
      pos++;
      if (in[aux] == '.') {
        cout << "1";
        pos++;
      }
      else {
        cout << "2";
        pos++;
      }
    }
  }
  cout << endl;
  return 0;
}
