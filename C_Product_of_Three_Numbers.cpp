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

vector<int>a(3);
int j=0;
for(ll i=2;i*i<n and j<2;i++)
{
    if(n%i==0 and n>1)
    {
        a[j++]=i;
        n/=i;
    }
}

if(j!=2)
{
    cout<<"NO"<<endl;
    return;
}
else{
    cout<<"YES"<<endl;
    cout<<a[0]<<" "<<a[1]<<" "<<n<<endl;
    return;
 
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