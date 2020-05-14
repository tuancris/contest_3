#include <bits/stdc++.h>
using namespace std;

int max_char = 26; // co 26 chu cai
int solve(string s, int k) {
	int l = s.length(); // l la do dai chuoi
	if(k >= l) return 0; // so lan xoa ko the lon hon do dai chuoi
	int arr[max_char] = {0}; // tao 1 mang trong luu tru tan so cua cac chu cai 
	for(int i=0; i<l; i++) 
		arr[s[i] - 'A']++; // dem tan so cac chu cai
	priority_queue<int> q; // tao danh sach uu tien
	for(int i=0; i<max_char; i++)
	    q.push(arr[i]); // vut tan so vao danh sach uu tien
	while(k--) {
		int tmp = q.top(); // lay ra tan so cao nhat
		q.pop(); // lay ra thi phai xoa di 
		tmp = tmp - 1; // moi lan lay ra bo di 1 
		q.push(tmp); // day vao danh sach uu tien 
	}
	int mins = 0; // gan bien tong bang 0
	while(!q.empty()) { // kiem tra hang doi co rong hay ko
	    int tmp = q.top(); // lay ra tan uu tien
	    mins += tmp*tmp; // tinh tong binh phuong tan so do
	    q.pop(); // xoa tan so da lay ra
    }
	return mins; // tra ve ket qua 
}
int main() {
	int t, k; cin >> t;
	while(t--) {
		string s; cin >> k >> s;
		cout << solve(s, k) << endl;
	}
	return 0;
}
