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
#define debug(x) cout<<#x<<" "<<x<<endl;
void solve(){

int n;
cin>>n;
map<int,int>m;

int num;

for(int i=0;i<n;i++)
{
    cin>>num;
    m[num]++;
}

int ans=0;

for(auto x:m)
{
    ans+=x.second/2;
}
cout<<ans<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}