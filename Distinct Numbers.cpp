#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	set<int> v;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> q;
		v.insert(q);
	}
	
	cout << v.size();
}