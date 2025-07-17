#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            set<int> v1;
            for(int k = 0; k < j; k++) {
                v1.insert(v[i][k]);
            }
            for(int k = 0; k < i; k++) {
                v1.insert(v[k][j]);
            }
            int mex = 0;
            while(v1.count(mex)) {
                mex++;
            }
            v[i][j] = mex;
        }
    }

    // 輸出網格
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

}