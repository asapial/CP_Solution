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

int a1,a2,b1,b2;
cin>>a1>>a2>>b1>>b2;

int ans=0;


if(a1>b1)
{
    if(a2>=b2)ans++;
}
else if(a1==b1)
{
    if(a2>b2)ans++;
}

if(a1>b2)
{
    if(a2>=b1)ans++;
}
else if(a1==b2)
{
    if(a2>b1)ans++;
}

if(a2>b1)
{
    if(a1>=b2)ans++;
}
else if(a2==b1)
{
    if(a1>b2)ans++;
}

if(a2>b2)
{
    if(a1>=b1)ans++;
}
else if(a2==b2)
{
    if(a1>b1)ans++;
}


cout<<ans<<endl;
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