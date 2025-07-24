#include<bits/stdc++.h>
using namespace std;


int main(){
	long long int n, q = 0, ans;
	cin >> n;
	long long int v[n];
	
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	
	q = max(q, v[0]);
	ans = v[0];
	for(int i=1; i<n; i++){
		if(q + v[i] > 0){
			q += v[i];
			ans = max(ans, q);
		}else{
			q = 0;
			ans = max(ans, v[i]);
		}
	}
	
	cout << ans;
	
	
}