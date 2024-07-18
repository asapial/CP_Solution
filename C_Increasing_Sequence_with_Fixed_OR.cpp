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

vector<ll>a;

for(int i=0;i<62;i++)
{
    if(n & ( int64_t (1)<<i))
    {
        a.push_back(i);

    }
}

int len=a.size();

if(len==1)
{
    cout<<1<<endl<<n<<endl;
}
else
{   
    cout<<len+1<<endl;
    for(int i=len-1;i>=0;i--)
    {
        cout<<n-(int64_t(1)<<a[i])<<" ";
    }
    cout<<n<<endl;
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