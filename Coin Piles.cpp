#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, a, b;
	cin >> n;
	
	while(n--){
		cin >> a >> b;
		if((a+b)%3 != 0 || (a / 2) > b || (b / 2) > a){
			cout << "NO\n";
		}else{
			cout << "YES\n";	
		}
	}
}