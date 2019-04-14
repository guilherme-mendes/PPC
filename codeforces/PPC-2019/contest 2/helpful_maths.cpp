#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin >> s;
sort(s.begin(), s.end());

for(int i = s.size()/2; i < s.size(); ++i){
    cout << s[i] << (i+1 == s.size() ? '\n' : '+');
}

    return 0;
}
