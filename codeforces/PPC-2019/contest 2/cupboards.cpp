#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int x, y;
    int a = 0, b = 0; 
    int ans = 0;

    cin >> n;
    for(int i=0; i < n; i++){
        cin >> x >> y;
        if (x == 0)
            a++;
        if (y == 0)
            b++;
    }

    if(abs(a-n) < a)
        ans += abs(a-n);
    else 
        ans += a;
    if(abs(b-n) < b)
        ans += abs(b-n);
    else 
        ans += b;

    cout << ans << endl;

    return 0;
}