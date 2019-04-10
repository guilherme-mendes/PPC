#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> cor;
    int n, m=4;

    for(int i=0; i < 4; i++){
        cin >> n;
            if(cor.count(n)==0){
                cor.insert(n);
                m--;
            }
    }

    cout << m << endl;

    return 0;
}
