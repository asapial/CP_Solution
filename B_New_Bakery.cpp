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

ll n,a,b;
cin>>n>>a>>b;

ll maximum_b=0;

if(b>a)
{
    maximum_b=min(b-a,n);
}
// cout<<maximum_b<<endl;

ll profit=(maximum_b*((2*b)-(maximum_b-1)))/2;

// cout<<profit<<endl;
profit+=(a*(n-maximum_b));

cout<<profit<<endl;
// cout<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}