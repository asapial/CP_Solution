#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
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
        ll n, a;
        cin >> n >> a;
        ll b[n], s[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        sort(b, b + n,greater<int>());

        for (int i = 0; i < n; ++i)
        {

            s[i] = (i ? s[i - 1] : 0) + b[i];
        }

        while (a--)
        {
            ll l = 1, r = n, mid, ans = -1;
            ll w;
            cin >> w;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (s[mid - 1] >= w)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}