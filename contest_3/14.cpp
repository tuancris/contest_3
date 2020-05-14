#include <bits/stdc++.h>
#define ll long long
using namespace std;

string tostring(ll n) { // ham chuyen ll sang string
	string a ="";
	while(n>0) {
		a = char(n%10+'0')+a;
		n /= 10;
	}
	return a;
}
vector<string> slp(ll n) { // ham tim cac so lap phuong nho hon n
	vector<string> a;
	for(ll i=1; i*i*i<=n; i++) {
		ll x = i*i*i;
		string b = tostring(x); // chuyen sang kieu string 
		a.push_back(b);
	}
	return a;
}
string solve(ll n) {
	vector<string> a = slp(n);
	string s = tostring(n); //chuyen so sang string 
	for(int i=a.size()-1; i>=0; i--) {
		string b = a[i]; // so hien tai
		int dem = 0;
		for(int j=0; j<s.size(); j++) {
			if(s[j] == b[dem]) dem++; // dem so chu so giong nhau giua so ban dau va so lap phuong nho hon n
		}
		if(dem==b.size()) return b; // neu so chu so giong nhau bang so chu so lap phuong thi tra ve
	}
	return "-1";
}
int main() {
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
