#include <bits/stdc++.h>
using namespace std;

int main(){
    int visitantes, vencedores = 0;
    string combinacao, temp;
    stack<string> s;
    cin >> visitantes;

    for (size_t i = 0; i < visitantes + 1; i++) {
        getline(cin, combinacao, '\n');
        if(s.empty()){
            string inicial = "F A C E";
            s.push(inicial);
        }
        if(i != 0){
            temp = s.top();
            reverse(temp.begin(), temp.end());
            if(combinacao == temp){
                s.pop();
                vencedores++;
            }else{
                s.push(combinacao);
            }
        }
    }

    cout << vencedores << endl;

  return 0;
}

