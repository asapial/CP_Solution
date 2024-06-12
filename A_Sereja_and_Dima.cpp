#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a, ll b) { return (a > b ? b : a); }
ll maxl(ll a, ll b) { return (a < b ? b : a); }
int solve()
{
    int num;
    cin >> num;
    int a[num];

    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    int sereja, dima;
    sereja = dima = 0;

    int l = 0, r = num - 1;
    int i = 0;
    int n;
    while (l <= r)
    {
        if (a[l] < a[r])
        {
            n = a[r];
            r--;
        }
        else
        {
            n = a[l];
            l++;
        }

        if (i % 2)
        {
            dima += n;
        }
        else
        {
            sereja += n;
        }

        i++;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
solve();
    return 0;
}