#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;

if(n%2==0){
    for(int i=1; i <= n; i++){
        cout << n-i+1 ;
        if(i!= 0) 
            cout << " ";
    }

cout << endl;

}
else{
    cout << "-1" << endl;
}

    return 0;
}
