#include <bits/stdc++.h>
#define ll long long int 
#define Mod 1000000007
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		ll n,tmp, sum = 0; cin >> n;
		priority_queue<ll, vector<ll>, greater<ll> >a; // tao danh sach uu tien va sap xep
		for(int i=0; i<n; i++) {
			ll x; cin >> x; // nhap phan tu
			a.push(x); // vut mang vao danh sach uu tien
		}
		for(int i=0; i<n; i++) {
			tmp = a.top()*i; //tinh tich theo de bai 
			tmp %= Mod; //lay du 
			sum += tmp; // cap nhat tong
			a.pop(); // xoa phan tu da lay ra
			sum %= Mod; //lay du cho ket qua
		}
		cout << sum << endl; // in ket qua
	}
	return 0;
}

