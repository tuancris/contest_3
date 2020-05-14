#include <bits/stdc++.h>
using namespace std;

struct act {
	int start, end; // kieu du lieu gom 2 thanh phan
};
bool comp(act s1, act s2) { // tham so comp truyen vao sort de sap xep 
    return (s1.end < s2.end); 
} 
void solve(act a[], int n) {
	for(int i=0; i<n;i ++)
		cin >> a[i].start; // nhap time bat dau
	for(int i=0;i<n;i++)
		cin >> a[i].end; // nhap thoi gian ket thuc
	sort(a,a+n,comp); // sap xep tang dan cho time end
		int ans = 1,i = 0; // i=0 vi luon chon cong viec dau tien
		for(int j=1; j<n; j++) {
			if(a[j].start>=a[i].end) { // neu time bat dau cong viec sau lon hon time ket thuc cong viec truoc thi chon no
				ans++; // tang bien dem
				i = j; // chuyen sang gia tri tiep theo
			}
		}
		cout << ans << endl;
}
int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n; act a[n];
		solve(a, n);
	}
	return 0;
}
