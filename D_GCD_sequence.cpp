#include<bits/stdc++.h>
using namespace std;



bool isNonDecreasing(vector<int>& b) {
    for (size_t i = 1; i < b.size(); ++i) {
        if (b[i] < b[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = false;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    temp.push_back(a[j]);
                }
            }

            vector<int> b(temp.size() - 1);
            for (size_t k = 0; k < temp.size() - 1; ++k) {
                b[k] = __gcd(temp[k], temp[k + 1]);
            }

            if (is_sorted(b.begin(), b.end())) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
