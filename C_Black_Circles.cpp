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
ll calculate(ll x1,ll y1,ll x2, ll y2)
{
    ll x =x1-x2;
    ll y =y1-y2;
    return x*x + y*y;
}
void solve(){

ll n;
cin>>n;
vector<int>a(n),b(n);


for(int i=0;i<n;i++)
{
    cin>>a[i]>>b[i];
}

ll xs,ys,xt,yt;
cin>>xs>>ys>>xt>>yt;

ll area=calculate(xs,ys,xt,yt);

for(int i=0;i<n;i++)
{
    if(area>=calculate(a[i],b[i],xt,yt))
    {
        cout<<"NO"<<endl;
        return;
    }
}

cout<<"YES"<<endl;

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