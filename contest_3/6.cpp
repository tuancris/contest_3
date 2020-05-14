#include <bits/stdc++.h>
#define Max 100
using namespace std;

bool kiemtra(int arr[], int n) {
	int b[n]; // tao mang b 
	copy(arr, arr+n, b); //copy mang a vao mang b
	sort(b, b+n); //sap xep mang tang dan
	for(int i=0; i<n; i++) {
		if(!(arr[i] == b[i]) && !(arr[n-i-1] == b[i])) return false; // kiem tra gia tri 2 mang a va b: a[1] = b[8-1-1]
	}                                                                // a[] = { 1, 7, 6, 4, 5, 3, 2, 8 }; 
	return true;                                                     // b[] = {1, 2, 3, 4, 5, 6, 7, 8 };
}
int main() {
	int arr[Max], t; cin >> t;
	while(t--) {
		int n; cin >> n;
		for(int i=0; i<n; i++)
		    cin >> arr[i];
		if(kiemtra(arr, n)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
