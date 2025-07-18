#include <bits/stdc++.h>
using namespace std;

int n;
int v[1001][1001]; 
int dx[] = {1, -1, 1, -1, 2, -2, 2, -2}; 
int dy[] = {2, 2, -2, -2, 1, 1, -1, -1};

void bfs() {
    queue<pair<int, int>> q;
    q.push({0, 0});
    v[0][0] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && v[nx][ny] == -1) {
                v[nx][ny] = v[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n;
    memset(v, -1, sizeof(v));  
    bfs();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

}