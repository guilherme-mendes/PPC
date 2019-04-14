#include <bits/stdc++.h>
using namespace std;
int main () {

  int size, swaps = 0;
  string word;
  cin >> size >> word;
  for (size_t i = 0; i < word.size(); i++) {
      if (word[i] == word[i + 1]) {
        swaps++;
      }
  }
  cout << swaps << endl;
  return 0;
}
