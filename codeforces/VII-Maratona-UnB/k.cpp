#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, m;
	char c;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			cin >> c;
			if (c == 'W')
				cout << i << " " << j << endl;
		}
 
	return 0;
}
