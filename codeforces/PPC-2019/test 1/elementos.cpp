#include <bits/stdc++.h>

using namespace std;

int main () {

    string a, b, resistente, vulneravel, imune;
    int dano;
    int ans = 0;
    cin >> a >> b >> dano;

    if (a == b) {
        ans = dano;
    } else {
        if (a == "Fogo") {
            resistente = "Ar";
            vulneravel = "Agua";
            imune = "Terra";
        } else if (a == "Agua") {
            resistente = "Fogo";
            vulneravel = "Terra";
            imune = "Ar";
        } else if (a == "Terra") {
            resistente = "Agua";
            vulneravel = "Ar";
            imune = "Fogo";
        } else if (a == "Ar") {
            resistente = "Terra";
            vulneravel = "Fogo";
            imune = "Agua";
        }
        if (b == resistente) {
            ans = 2 * dano;
        } else if (b == vulneravel) {
            ans = dano * 0.5;
        } else if (b == imune) {
            ans = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
