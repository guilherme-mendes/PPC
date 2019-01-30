#include <bits/stdc++.h>
using namespace std;

int main(){

    bool c;
    int i, n, q;
    double a, p;
    string freq;

    cin >> n;

    while (n--){

        cin >> q;
        string nomes[q];

        for (i = 0; i < q; i++){
            cin >> nomes[i];
        }

        c = false;
        for (i = 0; i < q; i++){
            a = 0;
            p = 0;
            cin >> freq;
            for (size_t j = 0; j < freq.length(); j++){
                if (freq.at(j) == 'A') a++;
                else if (freq.at(j) == 'P') p++;
            }
            if (a / (a + p) > 0.25){
                if (c) cout << " ";
                cout << nomes[i];
                c = true;
            }
        }
        cout << endl;
    }
    return 0;
}