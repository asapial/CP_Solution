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
ll mod=1e9+7;
ll bigMod(ll base, ll power)
{
    if(power==0) return 1;

    if(power%2)
    {
        return (bigMod(base,power-1)*base)%mod;
    }
    else
    {
        ll res=bigMod(base,power/2)%mod;
        return (res*res)%mod;
    }
    
}
void solve(){


ll n;
cin>>n;
vector<ll>a(n);

ll sum=0;
ll ans=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    ans = (ans + (sum * a[i]) % mod) % mod;
    sum = (sum + a[i]) % mod;
}

ll y = (n * (n - 1)) % mod;
y = (y * bigMod(2, mod - 2)) % mod; 

ans = (ans * bigMod(y, mod - 2)) % mod;

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