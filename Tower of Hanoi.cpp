#include<bits/stdc++.h>
using namespace std;

void solve(int q, int a, int b, int c){
	if(q == 1){
		cout << a << " " << c << "\n";
	}else{
		solve(q-1, a, c, b);
		solve(1, a, b, c);
		solve(q-1, b, a, c);
	}
}

int main(){
	int n;
	cin >> n;
	cout << pow(2, n)-1 << "\n";
	solve(n, 1, 2, 3);
}