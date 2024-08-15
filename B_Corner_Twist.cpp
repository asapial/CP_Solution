#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            b[i][j] = c - '0';
        }
    }

    // Apply operations greedily to transform a to b
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (a[i][j] != b[i][j]) {
                int diff = (b[i][j] - a[i][j] + 3) % 3;
                a[i][j] = (a[i][j] + diff) % 3;
                a[i + 1][j] = (a[i + 1][j] + diff) % 3;
                a[i][j + 1] = (a[i][j + 1] + diff) % 3;
                a[i + 1][j + 1] = (a[i + 1][j + 1] + diff) % 3;
            }
        }
    }

    // Check if the last row and last column match
    bool possible = true;
    for (int i = 0; i < n; ++i) {
        if (a[i][m - 1] != b[i][m - 1]) {
            possible = false;
            break;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (a[n - 1][j] != b[n - 1][j]) {
            possible = false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
