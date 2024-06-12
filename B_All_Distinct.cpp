#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;
        set<int> s(a, a + n);

        int d = n - s.size();
        cout << s.size() - (d & 1) << endl;
    }
}
