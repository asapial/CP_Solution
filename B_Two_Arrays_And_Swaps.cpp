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
int n,k;
cin>>n>>k;
int a[n],b[n];
for (int i = 0; i < n; i++)cin>>a[i];

for (int i = 0; i < n; i++)cin>>b[i];


sort(a,a+n);
sort(b,b+n,greater<int>());

int ans=0;


for (int i = 0; i < n; i++)
{
    if (i<k)
    {
        ans+=max(a[i],b[i]);
    }
    else
    {
        ans+=a[i];
    }
    
}


cout<<ans<<endl;
}
return 0;
}