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

int n,m;cin>>n>>m;
		bool ok = false;
		for(int i=0;i<n;++i){
			int a,b,c;
			cin>>c>>a>>b>>c;
			ok|=(a==b);
		}
		cout << ((ok && m%2==0)?"YES\n":"NO\n");
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}