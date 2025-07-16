#include<bits/stdc++.h>
using namespace std;

int main(){
	int q = 0;
	string s;
	cin >> s;
	vector<string> v;
	sort(s.begin(), s.end());
	
	do{
		q++;
    	v.push_back(s);
    }while (next_permutation(s.begin(), s.end()));
    
    cout << q << "\n";
    for(auto it : v){
    	cout << it << "\n";
	}
}