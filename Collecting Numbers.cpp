#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, ans = 1;
	cin >> n;
	vector<int> v(n), v1(n+1);
	
	for(int i=0; i<n; i++){
		cin >> v[i];
		v1[v[i]] = i;
	}
	
	for(int i=1; i<n; i++){
		if(v1[i] > v1[i+1]) ans++;
	}
	
	cout << ans;
}