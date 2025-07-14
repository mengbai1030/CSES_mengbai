#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    map<char, int> v; 
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        v[s[i]]++;
    }

    int q = 0;     
    char c;
    for (auto it : v) {
        if (it.second % 2 != 0) {
            q++;
            c = it.first; 
        }
    }

    if (q > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string left, right; 
    for (auto it : v) {
        string p(it.second / 2, it.first);
        left += p;
        right = p + right;
    }

    string ans = left;
    if (q == 1) {
        ans += c;
    }
    ans += right;

    cout << ans;
}