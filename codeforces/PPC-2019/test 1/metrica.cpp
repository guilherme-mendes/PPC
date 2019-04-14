#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    set<int> v;
    cin >> n;

    while(n--) {
        int k;
        cin >> k;
        v.insert(k);
    }
    cout << v.size() << endl;

    return 0;
}
