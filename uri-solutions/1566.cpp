#include <bits/stdc++.h>
using namespace std;

int main(){

    int nCasos = 0;
    cin >> nCasos;
    int alturas[3000000];

    for(int i = 0; i < nCasos; i++){

        int nAltura = 0;
        scanf("%d", &nAltura);

        for(int j = 0; j < nAltura; j++)
        scanf("%d", &alturas[j]);
        
        sort(alturas, alturas + nAltura);

        for(int j = 0; j < nAltura - 1; j++) 
        cout << alturas[j] << " ";

        cout << alturas[nAltura - 1];
        
        cout << endl;
    }

    return 0;
}