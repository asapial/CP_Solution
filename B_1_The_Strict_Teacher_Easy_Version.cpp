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

int n,m,q;
cin>>n>>m>>q;
vector<int>a(2);
cin>>a[0]>>a[1];
int now;
cin>>now;

sort(a.begin(),a.end());

if(a[1]<now)
{
    cout<<n-a[1]<<endl;
    return;
}
else if(now<a[0])
{
    cout<<a[0]-1<<endl;
    return;
}
else if(a[0]<=now and now<=a[1])
{
    cout<<(a[1]-a[0])/2<<endl;
    return;
}

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