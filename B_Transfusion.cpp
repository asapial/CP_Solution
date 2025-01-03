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
ll sum=0;
ll even=0,odd=0;
ll evencnt=0,oddcnt=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
    (i%2?even+=a[i]:odd+=a[i]);
    (i%2?evencnt++:oddcnt++);
}

if(sum%n!=0)
{
    cout<<"NO"<<endl;
    return;
}

if((even/evencnt)==(odd/oddcnt) and even%evencnt==0 and odd%oddcnt==0 )
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
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