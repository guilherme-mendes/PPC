#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, d, x;
	bool check, one;

	while((cin >> n >> d) && (n || d)){
		int din[n + 1][d + 1];
		check = false; one = false;
		for (int i = 0; i < d; ++i){
			for (int j = 0; j < n; ++j){
				cin >> x;
				din[j][i] = x;
			}
		}

		for (int i = 0; i < n; ++i){
			check = true;
			for (int j = 0; j < d; ++j){
				if(din[i][j] == 0)
					check = false;
			}
			if(check == true)
				one = true;	
		}

		if(one == true)
			cout << "yes" << "\n";
		else{
			cout << "no" << "\n";
		}
	}
	return 0;
}