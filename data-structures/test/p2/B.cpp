#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		deque <int> q;
		for(int i = 0; i < n; i++){
			int x, l;
			scanf("%d %d", &x, &l);
			if(l)
				q.push_front(x);
			else
				q.push_back(x);
		}
		for(int i = 0; i < n; i++)
			printf("%d%s", q[i], i+1 == n ? "\n" : " ");
	}
	return 0;
}
