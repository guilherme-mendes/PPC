#include <iostream>
using namespace std;

int main(){
  	char c;
	int n, T1_ida, T1_vol, T2_ida, T2_vol;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> T1_ida >> c >> T2_ida;
		cin >> T2_vol >> c >> T1_vol;

		if((T1_ida + T1_vol) == (T2_ida + T2_vol)){
			
			if(T1_vol > T2_ida){
				cout << "Time 1\n";	

			}else if(T2_ida > T1_vol){
				cout << "Time 2\n";

			}else{
				cout << "Penaltis\n";
			}

		}else if((T1_ida + T1_vol) > (T2_ida + T2_vol)){
			cout << "Time 1\n";

    }else{
			cout << "Time 2\n";
		}
	}
	return 0;
}

