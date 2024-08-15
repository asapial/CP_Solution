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
void solve(){

ll n,m,k;
cin>>n>>m>>k;

ll w;
cin>>w;

vector<ll>a(m*n,0);

for(ll i=0;i<w;i++)
{
    cin>>a[i];
}

vector<vector<ll>>grid(n,vector<ll>(m,0));

for(ll i=0;i<n-k+1;i++)
{
    for(ll j=0;j<m-k+1;j++)
    {
        for(ll a=i;a<i+k;a++ )
        {
            for(ll b=j;b<j+k;b++)
            {
                grid[a][b]++;
            }
        }
    }
}

vector<ll>p;
// for(ll i=0;i<n;i++)
// {
//     for(ll j=0;j<m;j++)
//     {
//         cout<<grid[i][j]<<" ";
//     }
//     cout<<endl;
// }
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<m;j++)
    {
        p.push_back(grid[i][j]);
    }
}


sort(a.begin(),a.end(),greater<ll>());
sort(p.begin(),p.end(),greater<ll>());

// for(ll i=0;i<n*m;i++)
// {
//     cout<<p[i]<<" ";
// }
// cout<<endl;

ll ans=0;

for(ll i=0;i<n*m;i++)
{
    ans+=a[i]*p[i];
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
ll term=1;
if(test)cin>>term;
while(term--){
solve();
}
return 0;
}