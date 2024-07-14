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

int a[200005],n,T;
cin>>n;
		for(int i=1;i<=n;++i)	cin>>a[i];
		a[n+1]=0;
		for(int i=n;i;--i)	a[i]=max(a[i],a[i+1]-1);
		for(int i=1;i<=n;++i)	cout<<(a[i]?1:0)<<' ';
		cout<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}