#include <bits/stdc++.h>

using namespace std;

int main () {

    vector<string> v;
    int n = 52;
    while (n--) {
        char a[2];
        cin >> a;
        v.push_back(a);
    }
    int soma = 0;
    int prox_21 = 0;
    for (int i = 0; i < 52; i++) {
        int value = 0;
        if (v[i][0] == 'A') {
            value = 1;
        } else if (v[i][0] == 'T' or v[i][0] == 'J' or v[i][0] == 'K' or v[i][0] == 'Q') {
            value = 10;
        } else {
            if (v[i][0] == '2') {
                value = 2;
            } else if (v[i][0] == '3') {
                value = 3;
            } else if (v[i][0] == '4') {
                value = 4;
            } else if (v[i][0] == '5') {
                value = 5;
            } else if (v[i][0] == '6') {
                value = 6;
            } else if (v[i][0] == '7') {
                value = 7;
            } else if (v[i][0] == '8') {
                value = 8;
            } else if (v[i][0] == '9') {
                value = 9;
            }
        }
        soma += value;
        if (soma > prox_21 and soma <= 21) {
            prox_21 = soma;
        }
    }

    cout << prox_21 << endl;

    return 0;
}
