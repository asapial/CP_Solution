#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i = int(n) - 1; i >= 0; i--)
using namespace std;
ll minl(ll a, ll b) { return (a > b ? b : a); }
ll maxl(ll a, ll b) { return (a < b ? b : a); }
void in(int n, int a[]) { forn(i, n) cin >> a[i]; }
void inl(ll n, ll a[]) { forn(i, n) cin >> a[i]; }
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
        int x, y, n;
        cin >> x >> y >> n;
        if (n - n % x + y <= n)
        {
            cout << n - n % x + y << endl;
        }
        else
        {
            cout << n - n % x - (x - y) << endl;
        }
    }
    return 0;
}