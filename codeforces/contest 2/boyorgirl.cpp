#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    set<char> c;
    cin >> s;

    for(auto i: s){
        c.insert(i);
    }

    c.size()%2 ? cout << "IGNORE HIM!" << endl : cout << "CHAT WITH HER!" << endl;

    return 0;
}
