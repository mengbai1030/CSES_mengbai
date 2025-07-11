#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int ans = 0, q = 1;
	cin >> s;
	
	for(int i=1; i<s.size(); i++){
		if(s[i] == s[i-1]){
			q++;
		}else{
			ans = max(ans, q);
			q = 1;
		}
	}
	
	ans = max(ans, q);
	cout << ans;
}