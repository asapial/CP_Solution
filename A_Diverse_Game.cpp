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


int n,m;
cin>>n>>m;

vector<int>a;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
}

if(n==1 and m==1)
{
    cout<<-1<<endl;
}

reverse(all(a));

int t=0;
vector<int>ans(n,vector<int>(m));

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        ans[i][j]=a[t++];
    }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<ans[i][j]<<" "; 
    }
    cout<<endl;
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