#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		stack <int> f[n];
		int tot = 0;
		for(int i = 0; i < n; i++){
			int m;
			scanf("%d", &m);
			tot += m;
			for(int j = 0; j < m; j++){
				int x;
				scanf("%d", &x);
				f[i].push(x);
			}
		}
		vector <int> ans;
		while((int) ans.size() != tot){
			for(int i = 0; i < n; i++){
				if(!f[i].empty()){
					ans.push_back(f[i].top());
					f[i].pop();
				}
			}
		}
		for(int i = 0; i < tot; i++)
			printf("%d%s", ans[i], i+1 == tot ? "\n" : " ");
	}
	return 0;
}
