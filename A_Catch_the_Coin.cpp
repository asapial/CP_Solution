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

int x,y;
cin>>x>>y;

int dis=abs(x);

int posi=dis*(-1);
y-=(dis-1);

// cout<<posi<<" "<<y<<endl;
if(y>=posi)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}


}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}


