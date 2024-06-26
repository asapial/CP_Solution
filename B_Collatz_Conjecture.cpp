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

ll x,y,k;
cin>>x>>y>>k;



    while(x>1 and k)
    {
        ll add=min(k,y-x%y);
        k-=add;
        x+=add;
        while (x%y==0)
        {
            x/=y;
        }
        

    }


cout<<x+(k%(y-1))<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}