#include <bits/stdc++.h>
using namespace std;
#define Pi 2 * acos(0.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 500006
#define MAX1 10000008
#define mem(a, v) memset(a, v, sizeof(a))
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
void solve()
{
    int n, a = 0;

    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i].first, p[i].second = i + 1;
    sort(p, p + n);
    for (int i = n - 1; i >= 0; i--)
        a += (p[i].first * (n - i - 1)) + 1;
    cout << a << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << p[i].second << " ";
}

int main()
{

    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}