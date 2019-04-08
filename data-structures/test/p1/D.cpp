#include <bits/stdc++.h>

using namespace std;

#define MAX 10005

typedef struct tubo{
  tubo(): ml(0), quantidade(0) {}
  int ml;
  int quantidade;
}tubo; 

bool comp_personalizada(tubo a,tubo b){
  if(a.quantidade == b.quantidade){
    return a.ml > b.ml;
  }
  return a.quantidade > b.quantidade;
}

int main(){
  int casos;
  cin >> casos;

  int turn = 0;

  while(casos--){
    if(turn++) cout << endl;
    tubo tubos[MAX];
    int qt;
    cin >> qt;

    int mls;
    for(int i =0;i < qt;++i){
      cin >> mls;
      tubos[mls].ml = mls;
      tubos[mls].quantidade++; 
    }
    
    sort(tubos, tubos+qt, comp_personalizada);

    for(int i = 0;i < qt;++i){
      if(tubos[i].quantidade > 0){
        cout << "Tipo: " << tubos[i].ml << " Quantidade: " << tubos[i].quantidade << endl;
      }
    }    
  }

  return 0;
}
