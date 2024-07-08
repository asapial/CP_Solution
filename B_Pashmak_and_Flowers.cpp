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
ll n;
cin>>n;
vector<ll>a(n);

for(int i=0;i<n;i++)
{
    cin>>a[i];
}


if(count(a.begin(),a.end(),a[0])==n)
{
    cout<<0<<" "<<(n*(n-1))/2<<endl;
    return;
}
ll maxi=*max_element(a.begin(),a.end());
ll mini=*min_element(a.begin(),a.end());

cout<<maxi-mini<<" "<<count(a.begin(),a.end(),maxi)*count(a.begin(),a.end(),mini)<<endl;

}

int main(){

int t;

t=1;
while(t--){
solve();
}
return 0;
}