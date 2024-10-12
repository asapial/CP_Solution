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

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> m(26, 0);

    for (int i = 0; i < n; i++)
    {
        m[s[i] - 'a']++;
    }

    string t;

    while (true)
    {
        bool flag = false;
        for (int i = 0; i < 26; i++)
        {
            if (m[i] > 0)
            {
                t += (char)(i + 'a');
                m[i]--;
                flag = true;
            }
        }
        if (!flag)
        {
            cout << t << endl;
            return;
        }
    }

    cout << t << endl;
}

bool test = 1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r",stdin);
    // freopen("output.txt", "w",stdout);
    int term = 1;
    if (test)
        cin >> term;
    while (term--)
    {
        solve();
    }
    return 0;
}