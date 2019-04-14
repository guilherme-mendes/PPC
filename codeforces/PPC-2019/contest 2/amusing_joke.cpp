#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s_total, s_total2;
    cin >> s1 >> s2 >> s_total;

    s_total2 = s1 + s2;

    sort(s_total.begin(), s_total.end());
    sort(s_total2.begin(), s_total2.end());

    if(s_total == s_total2)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}
