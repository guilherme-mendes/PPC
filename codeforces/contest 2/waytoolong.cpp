#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
string p;

cin >> n;

while(n--){
    cin >> p;

    p.size() <= 10 ? cout << p << endl : cout << p[0] << p.size()-2 << p[p.size()-1]<< endl;

}
    return 0;
}
