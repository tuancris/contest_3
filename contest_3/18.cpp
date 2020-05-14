#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a = 0, b = 0; // tao a,b = 0
	    cin >> n;
	    for(int i=0; i*7<=n; i++){
		    int j = (n-i*7)/4; // kieu nhu 7a+4b=n, can tim a,b la ra,
		    if(i*7 + j*4==n){
			    b=i;
			    a=j;
		    }
	    }
	    if(a==0 && b==0) // neu a va b bang 0
		     cout<<"-1" << endl;
	    for(int i=1;i<=a;i++) // neu a > 0 thi in ra du so a,o day in 4 truoc vi can tim so min 4 <7
		     cout<<"4";
	    for(int i=1;i<=b;i++) // tuong tu in b
		     cout<<"7";
	    cout << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
