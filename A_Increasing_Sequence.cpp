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
    int n;
cin >> n;
 
		int ans = 0;
 
		for(int i=0;i<n;i++){
			ans++;
			int a;
			cin >> a;
			while(a == ans) ans++;
		}
 
		cout << ans << "\n";
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}