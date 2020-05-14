#include <bits/stdc++.h>
#define Max 100
using namespace std;

int solve(int arr[], int n, int k) {
	int m, s = 0, s1 = 0; // gan 2 tong ban dau bang 0
	for(int i=0; i<n; i++)
	    s += arr[i]; // tinh tong cua mang 
	sort(arr, arr+n, greater<int>()); // sap xep giam dan mang 
	m = max(k, n-k); // m la so lon nhat giua k va n-k
	for(int i=0; i<m; i++)
	    s1 += arr[i]; // tinh tong cua m phan tu 
	return (s1-(s-s1)); // tra ve ket qua can tinh 
}
int main() {
	int arr[Max], t, n, k; cin >> t;
	while(t--) {
		cin >> n >> k;
		for(int i=0; i<n; i++)
		    cin >> arr[i];
		cout << solve(arr, n, k) << endl;
	}
	return 0;
}
