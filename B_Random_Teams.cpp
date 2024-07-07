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

ll n,m;cin>>n>>m;
	cout<<m*(n/m)*(n/m-1)/2+(n%m)*(n/m)<<" "<<(n-m+1)*(n-m)/2;
}

int main(){

int t;
t=1;
while(t--){
solve();
}
return 0;
}