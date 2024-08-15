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
vector<int>ans(2e5+5,0);
void solve(){

ll l,r;
cin>>l>>r;

cout<<ans[r]-ans[l-1]+((floor(log(l)/log(3)))+1)<<endl;
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

for(ll i=1;i<=2e5+5;i++)
{
    ans[i]+=(ans[i-1]+(floor(log(i)/log(3)))+1);
}
while(term--){

    
solve();
}
return 0;
}