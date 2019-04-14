#include <bits/stdc++.h>
using namespace std;

int main () {
  int up = 0, low = 0;
  char a;
  string in;
  cin >> in;
  for (size_t i = 0; i < in.size(); i++) {
    isupper(in[i]) ? up++ : low++;
  }
  if (up > low) {
    for (size_t i = 0; i < in.size(); i++) {
      a = toupper(in[i]);
      in[i] = a;
    }
    cout << in << endl;
  }
  else {
    for (size_t i = 0; i < in.size(); i++) {
      a = tolower(in[i]);
      in[i] = a;
    }
    cout << in << endl;
  }
}
