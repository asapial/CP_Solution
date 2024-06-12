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

int n;
cin>>n;
vector<int>a(n);

for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int sum=0,lc=1;

for(int i=0;i<n;i++)
{
    lc=lcm(lc,a[i]);
}

for(int i=0;i<n;i++)
{
    sum+=lc/a[i];
}

if(sum<lc)
{
    for(int i=0;i<n;i++)
    {
        cout<<lc/a[i]<<" ";
    }
    cout<<endl;
}
else{
    cout<<-1<<endl;
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