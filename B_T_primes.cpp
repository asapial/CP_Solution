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
vector<bool>check(1000006,false);

for(int i=2;i<1000006;i++)
{   
    if(check[i]==false)
    {
    for(int j=2;i*j<1000006;j++)
    {
        check[i*j]=true;
    }
    }
}


ll n;
cin>>n;

for(int i=0;i<n;i++)
{
    ll num;
    cin>>num;

    ll s=sqrt(num);

    if(num==1)
    {
        cout<<"NO"<<endl;

    }
    else if(s*s==num and check[s]==false)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
return 0;
}