#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll solve(ll arr[], ll n) {
	sort(arr, arr+n); // sap xep mang tang dan
	ll a = 0, b = 0; // gan a,b bang 0
	for(int i=0; i<n; i++) {
		if(i%2==0) a = a*10 + arr[i]; // neu i chan thi a duoc tinh theo cong thuc kia
		else b = b*10 + arr[i]; // neu i le thi tinh b tuong tu nhu a
	}
	return a+b; // tra ve tong hai so 
}
int main() {
	int  n, t; cin >> t;
	while(t--) {
	    cin >> n;
	    ll arr[n];
		for(int i=0; i<n; i++)
		    cin >> arr[i];
		cout << solve(arr, n) << endl;
	}
	return 0;
}

