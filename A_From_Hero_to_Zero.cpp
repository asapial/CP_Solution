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
ll make_ans(ll n,ll k)
{   
    if(n==0) return 0;
    ll ans=0;
    if(n%k==0)
    {
        ans=1+make_ans(n/k,k);
    }
    else
    {

        ans=n%k+make_ans(n-(n%k),k);
    }
    return ans;
}
void solve(){

ll n,k;
cin>>n>>k;
cout<<make_ans(n,k)<<endl;

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