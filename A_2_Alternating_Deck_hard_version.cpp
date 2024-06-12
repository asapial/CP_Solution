#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, num) for (int i = 0; i < int(num); i++)
#define fornr(i, num) for (int i = int(num) - 1; i >= 0; i--)
using namespace std;
ll minl(ll a, ll b) { return (a > b ? b : a); }
ll maxl(ll a, ll b) { return (a < b ? b : a); }
void in(ll num, ll a[]) { forn(i, num) cin >> a[i]; }
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

        int num;
        cin >> num;

        int aw, ab, bw, bb;
        aw = ab = bw = bb = 0;

        bool ok = true;
        for (int i = 0; num; i++)
        {
            int nw, nb;
            if ((4 * i) + 1 <= num)
            {
                nw = ((4 * i) + 1) / 2;
                nb = (((4 * i) + 1) / 2) + 1;

                if (i % 2 == 0)
                {
                    swap(nw, nb);
                }
            }
            else
            {
                nw = num / 2;
                nb = num-nw;
                if (i % 2 == 0)
                {
                    swap(nw, nb);
                }
            }

            
            if (ok)
            {
                ok = false;
                aw += nw;
                ab += nb;
                num = num - (nw + nb);
            }
            else
            {
                ok = true;
                bw += nw;
                bb += nb;
                num = num - (nw + nb);
            }
        }

        cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
    }
    return 0;
}