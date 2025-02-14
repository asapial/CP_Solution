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

ll n;
cin>>n;
map<ll,ll>a,b;

ll num;

for(ll i=0;i<n;i++)
{
    cin>>num;
    a[num]++;
}
for(ll i=0;i<n;i++)
{
    cin>>num;
    b[num]++;
}

if(a.size()>=3 or b.size()>=3)
{
    cout<<"YES"<<endl;
    return;
}

set<ll>s;

for(auto x:a)
{
    for(auto y:b)
    {
        s.insert(x.first+y.first);
    }
}

if(s.size()>=3)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
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