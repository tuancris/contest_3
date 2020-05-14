#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		stack<int> p;
		int res=0, xoa=0;
		for(int i=0; i<s.size(); i++) {
			if(p.size()==0) p.push(s[i]);
			else if(p.top()=='[' && s[i]==']') {
				p.pop();
				xoa += 2;
			}
			else if(p.top()==']' && s[i]=='[') {
				res += p.size()+xoa;
				p.pop();
			}
			else if(s[i]=='[') p.push(s[i]);
			else if(p.top()==']' && s[i]==']') p.push(s[i]);
			if(p.size()==0) xoa=0;
		}
		cout << res << endl;
	}
	return 0;
}
