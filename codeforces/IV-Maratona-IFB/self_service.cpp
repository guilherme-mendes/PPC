#include <bits/stdc++.h>
using namespace std;

int main () {

	int D;
	double R, aux, T, P, G;

	cin >> G >> D >> R;

	aux = G/1000;
	T = (100*R)/(100-D);
	P = T/aux;

	printf("%.8lf\n", P);
	return 0;
}
