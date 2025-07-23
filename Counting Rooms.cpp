#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<char>>& c, int x, int y, int n, int m) {
    if (x < 0 || x >= n || y < 0 || y >= m || c[x][y] == '#') return;
    c[x][y] = '#';
    solve(c, x+1, y, n, m);
    solve(c, x-1, y, n, m);
    solve(c, x, y+1, n, m);
    solve(c, x, y-1, n, m);
}

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '.') {
                ans++;
                solve(v, i, j, n, m);
            }
        }
    }
    cout << ans << "\n";
}