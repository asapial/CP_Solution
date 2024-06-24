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

int n,k;
cin>>n>>k;

map<int,int>m;
vector<int>a(n);

bool check=false;

for(int i=0;i<n;i++)
{
    cin>>a[i];
    m[a[i]]++;

    if(m[a[i]]==k)check=true;
}

cout<<(check?k-1:n)<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}