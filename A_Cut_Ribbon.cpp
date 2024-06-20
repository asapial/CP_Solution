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

int n,a,b,c;
cin>>n>>a>>b>>c;


int x;

int ans=0;

for(int i=0;i<=4000;i++)
{
    for(int j=0;j<=4000;j++)
    {
        x=n-(a*i)-(b*j);

        if(x>=0 and x%c==0)
        {
            ans=max(ans,i+j+(x/c));
        }
    }
}

cout<<ans<<endl;
return 0;
}