#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y,z;
	cin >> x;

	for(y=1; y<=x; y++){
		cin >> z;
	
		if(z%2==0)
			cout << "0" << "\n";
	
		else{
			cout << "1" << "\n";
		}		
	}
	return 0;
}
