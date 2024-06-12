#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i = (int n) - 1; i >= 0; i--)
using namespace std;
ll minl(ll a, ll b) { return (a > b ? b : a); }
ll maxl(ll a, ll b) { return (a < b ? b : a); }
int solve()
{

    return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int term;
    cin >> term;
    while (term--)
    {
        int n;
        cin >> n;

        int a[n];
        forn(i, n)
        {
            cin >> a[i];

            while (!(a[i] % 10 == 0 || a[i] % 10 == 2))
            {
                a[i] += a[i] % 10;
            }
            if (a[i] % 10 == 2)
            {
                a[i] %= 20;
            }
        }
        string ans = "Yes";
        forn(i, n - 1)
        {
            if (a[i] != a[i + 1])
            {
                ans = "No";
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}