#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, ans = 0;
	cin >> n;
	
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
		if(i >= 1 && v[i] < v[i-1]){
			ans += abs(v[i]-v[i-1]);
			v[i] = v[i-1];
		}
	}
	
	cout << ans;
}