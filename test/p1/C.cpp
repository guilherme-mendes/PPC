#include <bits/stdc++.h>

using namespace std;

int main(){
  int casos;
  cin >> casos;

  while(casos--){
    vector<int> vagoes;
    int qt;
    
    cin >> qt;
    int vagao;
    int total = 0;

    while(qt--){
      cin >> vagao;
      vagoes.push_back(vagao);
      total += vagao;
    }

    int ataques;
    cin >> ataques;

    while(ataques--){
      cin >> vagao;
      
      while(1){
        int moedas_destruidas = vagoes.back();
        total -= moedas_destruidas;
        vagoes.pop_back();
        if(moedas_destruidas == vagao) break;   
      }
    }

    cout << "Sobrou " << total << " moedas de ouro" << endl;
  }

  return 0;
}
