#include <bits/stdc++.h>
using namespace std;

int main () {

  string in;
  char a, aux;
  cin >> in;
  a = (char) in[0];
  aux = toupper(a);
  in[0] = aux;
  cout << in << endl;

  return 0;
}
