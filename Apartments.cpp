#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k, q, ans = 0;
	cin >> n >> m >> k;
	
	vector<int> v, v1;
	for(int i=0; i<n; i++){
		cin >> q;
		v.push_back(q);
	}sort(v.begin(), v.end());
	
	for(int i=0; i<m; i++){
		cin >> q;
		v1.push_back(q);
	}sort(v1.begin(), v1.end());
	
	int i=0, j=0;
	while(i != v.size() && j != v1.size()){
		if(v1[j]+k >= v[i] && v1[j]-k <= v[i]){
			ans++;
			i++;
			j++;
		}else{
			if(v[i] > v1[j]){
				j++;
			}else{
				i++;
			}
		}
	}
	
	cout << ans;
}