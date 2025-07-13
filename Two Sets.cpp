#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, q = 0, q1 = 0;
	cin >> n;
	if(((1+n)*n/2)%2 == 1) cout << "NO";
	else{
		set<int> v;
		cout << "YES\n";
		for(int i=n; i>0; i--){
			if(q <= q1){
				q += i;
				v.insert(i);
			}else{
				q1 += i;
			}
		}
		
		cout << v.size() << "\n";
		for(auto it : v) cout << it << " ";
		cout << "\n" << n-v.size() << "\n";
		for(int i=1; i<=n; i++){
			if(!v.count(i)){
				cout << i << " ";
			}
		}
	} 
}