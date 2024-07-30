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
ll minl(ll a,ll b){return (a>b?b:a);}
void solve(){

ll n;
cin>>n;
vector<pair<ll,ll>>a(n);


for(int i=0;i<n;i++)
{
    cin>>a[i].first>>a[i].second;
}


vector<vector<ll>>dp((ll)3,vector<ll>(n));

dp[0][0]=0;
dp[1][0]=a[0].second;
dp[2][0]=2*a[0].second;   

for(ll j=1;j<n;j++)
{
    for(ll i=0;i<3;i++)
    {
        dp[i][j]=LLONG_MAX;
        for(ll k=0;k<3;k++)
        {
            if(a[j].first+i!=a[j-1].first+k)
            {
                dp[i][j]=minl(dp[i][j],dp[k][j-1]+i*a[j].second);
            }
        }   
        
    }
}

ll ans=LLONG_MAX;

for(int i=0;i<3;i++)
{
    if(dp[i][n-1]<ans)
    {
        ans=dp[i][n-1];
    }
}
cout<<ans<<endl;
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         cout<<dp[i][j]<< " ";
//     }
//     cout<<endl;
// }
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