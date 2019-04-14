#include <bits/stdc++.h>
using namespace std;

int main(){
    int tot=0, min, max, aux, n;
    cin >> n;
    cin >> aux;
    min=aux;
    max=aux;

    for(int i=1; i<n; i++){
        cin >> aux;
        if(aux>max){
        max=aux;
        tot++;
        }
          
        if(aux<min){
        min=aux;
        tot++;
        }
    }

    cout << tot << endl;


    return 0;
}