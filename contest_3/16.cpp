#include <bits/stdc++.h>
using namespace std;

void solve(int s, int d) {
	if(s == 0) { // neu tong bang 0
		if(d == 1) cout << "0"; // neu co 1 chu so thi in ra 0
		else cout << "-1"; // ko có dap an in ra 1
		return;
	}
	if(s > 9*d) { // dieu kien kiem tra la ko co so nao thoa man
		cout << "-1"; // in ra -1
		return;
	}
	int a[d]; s -= 1; // tao 1 mang luu ket qua, ban dau tru 1 vao tong
	for(int i=d-1; i>0; i--) { // vòng for tu phai sang trai 
		if(s > 9) { // neu tong lon hon 9    20-1=19, xx9,x99
			a[i] = 9; // gan a[i] = 9
			s -= 9; // lay tong tru cho 9
		}
		else { // neu tong be hon 9
			a[i] = s; // gan a[i] = tong do
			s = 0; // s = 0
		}
	}
	a[0] = s + 1; // chu so dau se bang tong cong them 1 vi ban dau da tru di 1
	for(int i=0; i<d; i++) 
		cout << a[i]; // in ra ket qua 
}
int main() {
	int t, s, d; cin >> t;
	while(t--) {
		cin >> s >> d;
		solve(s, d);
		cout << endl;
	}
	return 0;
}
