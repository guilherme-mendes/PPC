#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    int count = 0;
	int r[5];

	while(cin >> n){
		for(int i = 0;i < 5;i++){
			cin >> r[i];
			    if(r[i] == n)
			        count++;
		}
        cout << count << endl;
        count = 0;
	}
	return 0;
}