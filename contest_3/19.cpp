#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll tu, ll mau) {
	if(tu == 0 || mau == 0) return; // neu tu hoac mau bang 0 
	if(mau%tu == 0) { // neu mau chia het cho tu
		cout << "1/" << mau/tu; // in ra 1/(mau/tu)
		return;
	}
	if(tu%mau == 0) { // neu tu chia het cho mau 
		cout << tu/mau; // in ra tu/mau 
		return;
	}
	if(tu > mau) { // neu tu lon hon mau
		cout << tu/mau << " + "; // in ra tu/mau + 
		solve(tu%mau, mau); // dequy (phan du, mau)
		return;
	}
	ll n = mau/tu + 1; // gan n 
	cout << "1/" << n << " + "; // in ra 1/n + 
	ll tu_moi, mau_moi; // tao 2 bien moi
	tu_moi = tu*n - mau; // 2/3=1/3+tu_moi/mau_moi suy ra tu_moi mau_moi 
	mau_moi = mau*n;
	solve(tu_moi, mau_moi); // de quy(tu_moi, mau_moi)
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
