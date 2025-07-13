#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, q = 1;
	cin >> n;
	
	while(n--){
		cout << (q*q)*(q*q-1)/2-4*(q-2)*(q-1) << "\n";
		q++;
	}
}