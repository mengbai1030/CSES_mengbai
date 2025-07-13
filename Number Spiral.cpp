#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin >> n;
    while(n--) {
        long long x, y;
        cin >> y >> x;
        long long k = max(y, x), ans;
        if (k%2 == 1) {
            if (y <= x) {
                ans = k*k-(y-1);
            } else {
                ans = (k-1)*(k-1)+x;
            }
        } else {
            if (y <= x) {
                ans = (k-1)*(k-1)+y;
            } else {
                ans = k*k-(x-1);
            }
        }
        cout << ans << "\n";
    }
}