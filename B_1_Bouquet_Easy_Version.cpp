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

ll n,m;
cin>>n>>m;
vector<ll>a(n);

for(auto &x:a)cin>>x;

sort(a.begin(),a.end());

ll ans=0;
ll left=0;
ll sum=0;
for(int i=0;i<n;i++)
{
    sum+=a[i];

    while(sum>m or (a[i]-a[left]>1 and left<n))
    {
        sum-=a[left];
        left++;
    }

    ans=max(ans,sum);
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