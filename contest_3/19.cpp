#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll tu, ll mau) {
	if(tu == 0 || mau == 0) return;  
	if(mau % tu == 0) {
		cout << "1/" << mau/tu;
		return ;
	}
	if(tu < mau) {
		ll n = mau/tu + 1;
		cout << "1/" << n << " + ";
		solve(tu*n-mau, mau*n);
	}
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll tu, mau; cin >> tu >> mau;
		solve(tu, mau);
		cout << endl;
	}
	return 0;
}
