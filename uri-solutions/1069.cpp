#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string linha;
        stack<char> s;
        int diamantes = 0;
        cin >> linha;

        for(int i = 0; i < linha.size(); i++){
            if(linha[i] == '<')
            s.push(i);
            else if(linha[i] == '>' && s.size() > 0){
                s.pop();
                diamantes++;
            }
        }
        cout << diamantes << endl;
    }

  return 0;
}
