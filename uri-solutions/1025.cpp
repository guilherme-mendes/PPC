#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q, x, cases = 1, sizeR;
	vector<int> m; vector<int> r;
	pair<vector<int>::iterator, vector<int>::iterator> it;

	while((cin >> n >> q) && (n || q)){
		m.clear(); r.clear();

		for (int i = 0; i < n; ++i){
			cin >> x;
			m.push_back(x);
		}

		for (int i = 0; i < q; ++i){
			cin >> x;
			r.push_back(x);
		}

		sort(m.begin(), m.end());	
		cout << "CASE# " << cases << ":" << endl;
		sizeR = r.size();

		for (int i = 0; i < sizeR; ++i){
			if(binary_search(m.begin(), m.end(), r[i])){
				it = equal_range(m.begin(), m.end(), r[i]);
				cout << r[i] <<" found at " << it.first - m.begin() + 1 << endl;
			}else{
				cout << r[i] << " not found" << "\n";
			}
		}

		cases++;
	}

	return 0;
}
