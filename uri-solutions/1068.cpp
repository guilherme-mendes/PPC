#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    string linha;

    while(getline(cin, linha)){
        size = linha.length();
        stack <char> s;

        for(size_t i = 0; i < size; i++){
            if(linha[i] == '(')
                s.push(i);
            if(linha[i] == ')')
                if(!s.empty())
                    s.pop();
                else s.push(i);
        }
            cout << (s.empty() ? "correct" : "incorrect") << endl;
    }
    return 0;
}
