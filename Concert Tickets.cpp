#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
    
	long long int n, m, q;
	multiset<long long int, greater<int>> v;
	
	cin >> n >> m;
	while(n--){
		cin >> q;
		v.insert(q);
	}
	
	while(m--){
		cin >> q;
		auto it = v.lower_bound(q);
		
		if(it == v.end()){
            cout << -1 << "\n";
        }else{
            cout << *it << "\n";
            v.erase(it);
        }
	}
}