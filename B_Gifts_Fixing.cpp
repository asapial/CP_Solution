#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){


return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
ll n;
cin>>n;
ll a[n],b[n];

for(ll i=0;i<n;i++) cin>>a[i];
for(ll i=0;i<n;i++) cin>>b[i];

ll ma=*min_element(a,a+n);
ll mb=*min_element(b,b+n);
ll ans=0;
for(ll i=0;i<n;i++)
{
    ans+=max(a[i]-ma,b[i]-mb);
}
cout<<ans<<endl;
}
return 0;
}