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

cout<<a[n-1]+*max_element(a.begin(),a.end()-1)<<endl;

}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}