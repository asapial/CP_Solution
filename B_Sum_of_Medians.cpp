#include <bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 500006
#define MAX1 10000008
#define mem(a,v) memset(a,v,sizeof(a))
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

void solve() {
    ll n, k;
    cin >> k >> n;
    vector<ll> a(n * k);
    for (int i = 0; i < n * k; i++) {
        cin >> a[i];
    }
    ll x = (k + 1) / 2 - 1;
    x = k - x;
    ll z = n * k;
    ll ans = 0;
    while (n--) {
        z -= x;
        if (z < 0) break;
        ans += a[z];
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
