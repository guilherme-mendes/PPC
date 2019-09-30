#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
 
    for(int i=0, bus=0; i<s.size(); i++){
        if(s[i]=='O') b++;
 
        if((i+1)%3==0 && b==5){
            cout << "fizzbusao" << endl;
            b = 0;
        } s
        else if(b == 5){
            cout << "busao" << endl;
            b = 0;
        } 
        else if((i+1)%3==0) 
        cout << "fizz" << endl;
        
        else 
        cout << i+1 << endl;
    }
 
    return 0;
}
