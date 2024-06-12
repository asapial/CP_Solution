#include <bits/stdc++.h>
using namespace std;
void solve(){

int n,m,k;
cin>>n>>m>>k;
cout<<((n+m-1)/m+k<n?"YES":"NO")<<endl;
}

int main(){

int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}


