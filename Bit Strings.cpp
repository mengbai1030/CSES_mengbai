#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, mod = 1000000007, ans = 1;
	cin >> n;
	for(int i=0; i<n; i++){
		ans *= 2;
		ans %= mod;
	}
	cout << ans;
}