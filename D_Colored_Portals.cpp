#include <bits/stdc++.h>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define debug(x) cout<<#x<<" "<<x<<endl;
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
bool path(string a, string b)
{
    if(a[0]==b[0]) return true;
    if(a[0]==b[1]) return true;
    if(a[1]==b[0]) return true;
    if(a[1]==b[1]) return true;
    return false;
}
void solve(){

ll n,m;
cin>>n>>m;

string s[n];

for(ll i=0;i<n;i++)
{
    cin>>s[i];
}

while(m--)
{
    ll l,r;
    cin>>l>>r;

    if(l==r)
    {
        cout<<0<<endl;
        continue;
    }

    if(l>r)
    {
        swap(l,r);
    }

    bool check1=true,check2=true;
    ll ans1=0,ans2=0;


    for(ll i=l-1;i<=r-2;i++)
    {
        if(!path(s[i],s[i+1]))
        {
            check1=false;
            break;
        }
        
    }

    ans1+=(r-l);
    
    for(ll i=r-1;i<=n-2;i++)
    {
        if(!path(s[i],s[i+1]))
        {
            check2&=false;
            break;
        }
        
    }

    if(!path(s[1],s[n-1]))
    {
            check2&=false;
            break;
    }

    for(ll i=0;i<=l-2;i++)
    {
        if(!path(s[i],s[i+1]))
        {
            check2&=false;
            break;
        }
        
    }

    ans2+=(n-r);
    ans2+=(n-1);
    ans2+=(l-1);

    ll ans=LLONG_MAX;

    if(check1)
    {
        ans=min(ans,ans1);
    }
    if(check2)
    {
        ans=min(ans,ans2);
    }

    if(ans==LLONG_MAX)
    {
        cout<<-1<<endl;
        continue;
    }

    debug(ans1);
    debug(ans2);
    debug(ans);
    cout<<ans<<endl;

}
}

bool test=1;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
// freopen("input.txt", "r",stdin);
// freopen("output.txt", "w",stdout);
ll term=1;
if(test)cin>>term;
while(term--){
solve();
}
return 0;
}



