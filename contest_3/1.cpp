#include<bits/stdc++.h>
using namespace std;
int n;
int note[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000}; // khai bao mang gom cac menh gia tien
int solve(){
	int dem = 0; // gan bien dem ban dau bang 0
	for(int i = 9; i >= 0; i--){ // vong for chay tu to tien lon nhat den to be nhat 
		dem += n/note[i]; // lay so tien ban dau chia cho cac phan tu trong mang va tang bien dem 
		n %= note[i]; // tim phan du va no cap nhat cho n va cu lam khi nao n = 0 ket thuc
	}
	return dem; // tra ve ket qua
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		cout << solve() << endl;
	}
	return 0;
}
