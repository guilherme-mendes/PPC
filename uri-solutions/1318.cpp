#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, bilhete, i;

    while (cin >> n >> m && n != 0 && m != 0){
        i = 0;
        int bilhetes[n + 1];

        memset(bilhetes, 0, sizeof(bilhetes));

        while (m--){
            cin >> bilhete;

            if (bilhetes[bilhete] == 1) i++;

            bilhetes[bilhete]++;
        }

        cout << i << endl;
    }
    return 0;
}
