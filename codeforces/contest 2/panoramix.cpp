#include <bits/stdc++.h>
using namespace std;

int primos[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

int main(){

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < 15; i++){
        if(n == primos[i]){
            m == primos[i+1] ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}
