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
ll cnt2,cnt3,cnt5;
cnt2=cnt3=cnt5=0;
cin>>n;

while(n%2==0)
{
    cnt2++;
    n/=2;
}
while(n%3==0)
{
    cnt3++;
    n/=3;
}
while(n%5==0)
{
    cnt5++;
    n/=5;
}

cout<<(n!=1?-1:cnt2+cnt3*2+cnt5*3)<<endl;

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