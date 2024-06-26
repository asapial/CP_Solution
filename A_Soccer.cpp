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

ll x1,y1,x2,y2;

cin>>x1>>y1>>x2>>y2;

if((x1<y1 and y1<=x2) or (x1<y2 and y2<=x2) or (y1<x1 and x1<=y2) or (y1<x2 and x2<=y2))
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
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