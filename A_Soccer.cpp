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

ll a,b,c,d;
cin>>a>>b>>c>>d;

if((a<b and c<d) or (a>b and c>d))
{
    cout<<"YES"<<endl;

}
else
{
    cout<<"NO"<<endl;
}
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}