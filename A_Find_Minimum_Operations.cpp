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
#define debug(x) cout<<#x<<" "<<x<<endl;

void solve() {
    ll n, k;
    cin >> n >> k;
    ll ans = 0;

    if (k == 1) {
        cout << n << endl;
        return;
    }

    while (n > 0) {

        ll temp_power = pow(k, (ll)(log(n) / log(k)));
        
        ans+=(n/temp_power);
        n=n-(n/temp_power)*temp_power;
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
