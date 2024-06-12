#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;
void solve()
{

    ll x, y;
    cin >> x >> y;

    ll ans = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((x & (1ll << i)) != (y & (1ll << i)))
        {
            ans = i;
            break;
        }
    }
    cout << (1ll << ans) << endl;
    return;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}