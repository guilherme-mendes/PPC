#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	while(scanf("%d %d", &n, &m) and (n+m)){
		int t[n], f[m];
		for(int i = 0; i < n; i++)
			scanf("%d", &t[i]);
		int ans = 1;
		for(int i = 0; i < m; i++){
			int x;
			scanf("%d", &x);
			int j; 
			for(j = 0; j < n; j++){
				if(t[j] >= x){
					t[j] -= x;
					break;
				}
			}
			ans &= j < n;
		}
		printf("%s\n", ans ? "Tamanduas venceram!" : "Formigas venceram!");

	}
	return 0;
}
