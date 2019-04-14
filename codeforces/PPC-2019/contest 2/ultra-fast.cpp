#include <bits/stdc++.h>
using namespace std;

int main(){
    string n, m;
    cin >> n >> m;

    for(int i=0; i < n.length(); ++i){
        n[i] != m[i] ? cout << "1" : cout << "0";
    }

    cout << endl;

    return 0;
}
