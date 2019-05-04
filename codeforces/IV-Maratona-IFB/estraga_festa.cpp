#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, ll>;
using vi = vector<pi>;


int main () {
	ios::sync_with_stdio(false);
    int n, m, aux;
    vi answ;
    ll tempo;
    cin >> n >> m;
    while(n--){
        cin >> aux >> tempo;
        answ.push_back(make_pair(aux, tempo));
    }
    sort(answ.begin(), answ.end());
    if (answ[answ.size() - 1].first > m) {
        cout << "N" << endl;
    }
    else if ((answ[answ.size() - 1].first == m) && (answ[answ.size() - 1].second < (300 * m)) && (answ[answ.size() - 1].second > 0)) {
        cout << "N" << endl;
    }
    else {
        cout << "S" << endl;
    }

	return 0;
}
