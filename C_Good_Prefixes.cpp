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

ll sum=0,maxi=0;

ll num;
ll ans=0;
for(int i=0;i<n;i++)
{
    cin>>num;
    sum+=num;
    maxi=max(maxi,num);
    if(sum-maxi==maxi)
    {
        ans++;
    }

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