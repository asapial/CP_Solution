#include <bits/stdc++.h>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define debug(x) cout<<#x<<" "<<x<<endl;
void _print(vector<int>a){ cout<<'[ ';for(auto x:a)cout<<x<<" ";cout<<' ]';}
void solve() {
    ll n;
    cin >> n;

    vector<ll> val(n);
    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        cin >> val[i];
        sum += val[i];
    }

    string s;
    cin >> s;
    debug(s);
    ll ans = 0;
    ll l = 0, r = n - 1;

    while (r > l) {
        while (s[l] == 'R') {
            sum -= val[l];
            l++;
        }
        while (s[r] == 'L') {
            sum -= val[r];
            r--;
        }
        if (r < l) break;

        ans += sum;
        sum -= val[l];
        l++;
        sum -= val[r];
        r--;
    }
    cout<<ans<<endl;
}


bool test=1;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
// freopen("input.txt", "r",stdin);
// freopen("output.txt", "w",stdout);
int term=1;
if(test)cin>>term;
while(term--){
solve();
}
return 0;
}