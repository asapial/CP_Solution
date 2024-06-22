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


}

int main(){

ll n;
cin>>n;
vector<ll>a(n);
for(ll i=0;i<n;i++)
{
    cin>>a[i];
}

if(is_sorted(a.begin(),a.end()))
{
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
    return 0;
}

ll l=0,r=n;

bool check=true;
for(ll i=n-1;i>=0;i--)
{
    if(a[i]<a[i-1])
    {
        r=i;
        break;
    }
}
for(ll i=r;i>=0;i--)
{
    if(a[i]>a[i-1])
    {
        l=i;
        break;
    }
}


reverse(a.begin()+l,a.begin()+r+1);



if(is_sorted(a.begin(),a.end()))
{
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
}
else
{
    cout<<"no"<<endl;
}
return 0;
}


