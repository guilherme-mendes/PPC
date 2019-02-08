#include <bits/stdc++.h>

using namespace std;

deque <int> a, c, b;
int cnt;

int seeA(int x){
	cnt = 0;
	if(find(a.begin(), a.end(), x) != a.end()){
		while(a.back() != x){
			c.push_back(a.back());
			a.pop_back();
			cnt++;
		}
		b.push_back(a.back());
		a.pop_back();
		cnt++;
	}
	return cnt;
}

int seeC(int x){
	cnt = 0;
	if(find(c.begin(), c.end(), x) != c.end()){
		while(c.back() != x){
			a.push_back(c.back());
			c.pop_back();
			cnt++;
		}
		b.push_back(c.back());
		c.pop_back();
		cnt++;
	}
	return cnt;
}

int main(){
	int n;
	while(cin >> n, n){
		a.clear(), b.clear(), c.clear();
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans += seeA(i);
			ans += seeC(i);
		}
		printf("%d\n", ans);
	}
	return 0;
}
