#include <iostream>
#include <string.h>

using namespace std;
int main(){
    string x;

    getline(cin, x);
    int n = stoi(x);
    while(n){
        string a, b;
        cin>>a>>b;

        if(a.size()<b.size()){
            cout<<"nao encaixa\n";
            n--;
            continue;
        }
        if(a==b){
            cout<<"encaixa\n";
            n--;
            continue;
        }
        string x;
        x = a.substr(a.size() - b.size());
        cout<<(x==b? "encaixa\n" : "nao encaixa\n");
        n--;
    }
    return 0;
}
