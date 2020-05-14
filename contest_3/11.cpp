#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n, res = 0; // gan ket qua bang 0
	cin >> n; // nhap so luong phan tu 
	priority_queue<ll, vector<ll>, greater<ll> > a; // tao 1 danh sach uu tien va sap xep
	for(ll i=0; i<n; i++){
		ll x; cin >> x; // nhap cac phan tu cua de bai 
		a.push(x); //vut cac phan tu vao danh sach uu tien
	}
	while(a.size() > 1){ // khi kich co cua danh sach uu tien > 1
		ll x = a.top(); a.pop(); //lay ra phan tu nho nhat va xoa khoi danh sach
		ll y = a.top(); a.pop(); // lay ra phan tu min thu 2 va xoa khoi danh sach
		ll tmp = (x + y)%MOD; // cong tong 2 phan tu min va lay du
		res = (res+tmp)%MOD; //cap nhat ket qua va lay du
		a.push(tmp); // day tong min vua tao vao danh sach uu tien 
	}
	cout << res << endl; // in ket qua
	return 0;
}
