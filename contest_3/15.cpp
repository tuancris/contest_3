#include <bits/stdc++.h> 
using namespace std; 
// S: so ngay de ton tai
// N: so luong thuc mua toi da trong mot ngay
// M: so luong thuc can thiet de song trong mot ngay
void solve(int S, int N, int M) {  
    if (((N * 6) < (M * 7) && S > 6) || M > N) // kiem tra dieu kien song sot
        cout << "-1" << endl;
    else { 
        int days = (M * S) / N; // cong thuc tinh so ngay
        if (((M * S) % N) != 0) // neu du khac 0 thi tang bien dem ngay
             days++; 
        cout << days << endl; // tra ve ket qua
    } 
} 
  

int main() { 
   int t; cin >> t;
   while(t--) {
   	   int N, S, M; cin >> N >> S >> M;
   	    solve(S,N,M);
     }
     return 0; 
} 
