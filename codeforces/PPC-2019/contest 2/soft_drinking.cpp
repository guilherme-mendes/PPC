#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c  >> d  >> p  >> nl >> np;

    int ans = (k*l)/nl;
    int ans2 = c*d;
    int ans3 = p/np;

    int ans4 = min(min(ans, ans2),ans3);


    cout << ans4/n << endl;

    return 0;
}
