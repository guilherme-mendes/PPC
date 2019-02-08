#include <bits/stdc++.h>
using namespace std;

typedef stack<int> s;
int vet[1001];

int main(){
    int n, top, aux;

    while(cin >> n && n){
    	while(cin >> vet[0] && vet[0]){
            for(int i = 1; i < n; i++)
    		      cin >> vet[i];
    		s p;
    		aux = 0;

    		for(int i = 1; i <= n; i++){
    			p.push(i);
                
    			while(p.size() > 0 && vet[aux] == p.top()){
    				aux++;
    				p.pop();
    			}
    		}

    		(p.size() == 0) ? cout << "Yes" << endl : cout << "No" << endl;
    	}

    	cout << "\n";
    }

    return 0;
}
