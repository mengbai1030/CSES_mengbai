#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, q, ans = 0;
	cin >> n;
	ans = ((1+n) * n) / 2;
	n--;
	
	while(n--){
		cin >> q;
		ans -= q;
	}
	
	cout << ans;
}