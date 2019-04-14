#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vv = vector<vi>;

int main () {

  int cases, aux, x = 0, y = 0, z = 0;
  vi loc;
  vv a;
  cin >> cases;
  while (cases--) {
    for (size_t i = 0; i < 3; i++) {
      cin >> aux;
      loc.push_back(aux);
    }
    a.push_back(loc);
    loc.clear();
  }
  for (size_t i = 0; i < a.size(); i++) {
      x += a[i][0];
      y += a[i][1];
      z += a[i][2];
  }

  if ((x == 0) && (y == 0) && (z == 0)) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}
