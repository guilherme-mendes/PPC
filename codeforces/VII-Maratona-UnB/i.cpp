#include <bits/stdc++.h>
using namespace std;

int n, m;
int ideal[110];
vector<pii> vec;
 
int getS(){
	int h, mi, s;
	scanf("%d:%d:%d ", &h, &mi, &s);
	return h * 3600 + mi * 60 + s;
}
 
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		ideal[i] = getS();
 
	for (int i = 1; i <= m; i++) {
		int now = 0;
		for (int i = 0; i < n; i++) {
			int dif = ideal[i] - getS();
			if (dif < 0)
				now += -dif;
			else if (dif > 0)
				now += 2*dif;
		}
		vec.push_back({now, i});
	}
	
	sort (vec.begin(), vec.end());
	printf ("Equipe vencedora: %d\n", vec.begin()->y);
	printf ("Penalidade: %d ponto(s)\n", vec.begin()->x);
 
	return 0;
}
