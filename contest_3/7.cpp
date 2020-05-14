#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll a[], ll b[], ll n) {
	sort(a, a+n); //sap xep mang tang dan
	sort(b, b+n, greater<int>()); // sap xep mang giam dan
	ll s = 0; // gan tong  bang 0
	for(int i=0; i<n; i++)
	    s += a[i]*b[i]; // tong cua tich min khi nhan phan tu nho nhat mang nay voi phan tu lon nhat mang kia
	return s; // tra ve ket qua
}
int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		ll a[n], b[n];
		for(int i=0; i<n; i++)
		   cin >> a[i];
		for(int i=0; i<n; i++)
		   cin >> b[i];
		cout << solve(a, b, n) << endl;
	}
	return 0;
}
