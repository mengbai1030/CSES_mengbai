#include <bits/stdc++.h>
using namespace std;

vector<string> solve(int n) {
    if (n == 1) {
        return {"0", "1"};
    }
    
    vector<string> a = solve(n - 1);
    vector<string> b;
    
    for (string s : a) {
        b.push_back("0" + s);
    }
    
    for (int i = a.size() - 1; i >= 0; i--) {
        b.push_back("1" + a[i]);
    }
    
    return b;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> v = solve(n);
    
    for (string it : v) {
        cout << it << "\n";
    }
    
}