#include <bits/stdc++.h>
using namespace std;

int main(){

    double n, m;
    cin >> n;
    double soma = 0;

    for(int i = 0; i < n; i++){
        cin >> m;
        soma = soma + m;
    }

    cout << (soma/n) << endl;

    return 0;
}
