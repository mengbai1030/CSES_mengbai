#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, q, ans = 0;
	vector<int> v;
	
	cin >> n >> m;
	for(int i=0; i<n;  i++){
		cin >> q;
		v.push_back(q);
	}sort(v.begin(), v.end());
	
	int j = 0;
	for(int i=v.size()-1; i>=0 && i >= j; i--){
		if(v[i] + v[j] <= m){
			j++;
		}
		
		ans++;
	}
	
	cout << ans;
}