#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, j, aux;
	cin >> n;
	
	while(n!=0){	
	if(n==0) return 0;

	int a[n], i, posicao[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		posicao[i]=i+1;
	}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]){
					aux=a[i];
					a[i]=a[j];
					a[j]=aux;
					aux=posicao[i];
					posicao[i]=posicao[j];
					posicao[j]=aux;
				}
			}
		}
		cout << posicao[n-2] << "\n";
		cin >> n;
			}
return 0;
}
				
