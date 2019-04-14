#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, s1, s2, total = 0;
    int maxt = total;

    cin >> n;
    while(n--){
    cin >> s1;
    cin >> s2;

    total = total - s1 + s2;
    maxt = max(maxt, total);

    }

    cout << maxt << endl;
    
    return 0;
}
