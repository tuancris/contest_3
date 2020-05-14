#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t,k; cin >> t;
	while(t--){
	    cin >> k;
		string s; cin>>s;
	    ll l = s.length(); // l la do dai chuoi
	    ll arr[256] = {0}; // tao 1 mang lua tru tan so chu cai
	    ll maxi = 0;
	    for(int i=0 ; i<l ; i++) 
	    	arr[s[i]-'0']++; // dem tan so max
		for(int i=0; i<256; i++)
		    maxi = max(maxi, arr[i]);
	    if((maxi-1)*(k-1)+maxi > l)  cout << "-1" << endl;
	    else cout << "1" << endl;
    }
	return 0;
}
// if(arr[s[i]-'0'] >= max) max = arr[s[i]-'0'];	// tim ra tan so max
