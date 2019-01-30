#include <bits/stdc++.h>
using namespace std;

int main(){
	
    while(1){
		int N, A, somaA = 0, B, somaB = 0;
		
		cin >> N;
		
        if(N == 0) break;
		    for(int i = 0; i < N; i++){
			    cin >> A >> B;
			        if(A > B)
				        somaA++;
			        else if(A < B)
				        somaB++;
		    }
		    cout << somaA << " " << somaB << endl;
	}
	return 0;
}